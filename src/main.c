#include <stdio.h>
#include <FreeRTOS.h>
#include <task.h>
#include <queue.h>
#include <semphr.h>
#include "signaling.h"
#include "fifo.h"

// struct request_msg {
//     int input;
//     int output;
//     int handled_by;
// };

int main(void){
        QueueHandle_t requests = xQueueCreate(10, sizeof(struct request_msg));
    QueueHandle_t results = xQueueCreate(10, sizeof(struct request_msg));

    if (requests == NULL || results == NULL) {
        printf("Failed to create queues.\n");
        return 1;  // Exit if queue creation failed
    }

    // Create the worker task
    BaseType_t taskStatus = xTaskCreate(
        (TaskFunction_t)fifo_worker_handler, // Task function
        "WorkerTask",                        // Task name (for debugging)
        1024,                                // Stack size (in words, not bytes)
        (void *)requests,                    // Task parameter (queue handle)
        tskIDLE_PRIORITY + 1,                // Task priority
        NULL                                 // Task handle (optional)
    );

    if (taskStatus != pdPASS) {
        printf("Task creation failed.\n");
        return 1;  // Exit if task creation failed
    }

    // Start the scheduler (this function will not return)
    vTaskStartScheduler();

    // This point will only be reached if there is insufficient heap memory
    printf("Scheduler failed to start.\n");
    
    return 0;
}

