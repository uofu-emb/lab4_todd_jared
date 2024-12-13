# add_executable(mytest test.c unity_config.c)

# target_link_libraries(mytest PRIVATE
#   pico_stdlib
#   pico_async_context_freertos
#   FreeRTOS-Kernel-Heap4
#   unity
# )

# # The CYW43 is the Wifi/Bluetooth module. If the board is set to pico_w, this
# # variable will be set and the wireless libraries added.
# if(PICO_CYW43_SUPPORTED)
#     target_link_libraries(mytest PRIVATE
#         pico_cyw43_arch_none
#     )
# endif()

# # Modify the below lines to enable/disable output over UART/USB.
# # These are mutually exclusive, only set one.
# pico_enable_stdio_uart(mytest 0)
# pico_enable_stdio_usb(mytest 1)

# # This will speed up the simulation, since data won't be copied from the flash controller.
# # It does make the binary non-persistent on a real microcontroller.
# # pico_set_binary_type(mytest no_flash)

# find_program(RENODE renode
# # This is extra stuff so it can find the mac installation paths.
#  NAMES macos_run.command Renode.exe
#  PATHS /Applications/Renode.app/Contents/MacOS)

# set(RENODE_FLAGS
#   --disable-xwt
#   --port -2
#   --pid-file renode.pid
#   --console
#   )

# add_test(NAME simulate_mytest COMMAND
#     ${RENODE}
#      ${RENODE_FLAGS}
#     -e "$ELF=@$<TARGET_FILE:mytest>; $WORKING=@${CMAKE_SOURCE_DIR}; include @${CMAKE_SOURCE_DIR}/test/simulate.resc; start"
#     )

# add_custom_target(flash_test picotool load -f $<TARGET_FILE:mytest> DEPENDS mytest)

add_executable(lab4_test_fifo test_fifo.c ../src/fifo.c unity_config.c)
target_link_libraries(lab4_test_fifo PRIVATE
  pico_stdlib
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
  pico_cyw43_arch_none
  unity
)
pico_enable_stdio_uart(lab4_test_fifo 0)
pico_enable_stdio_usb(lab4_test_fifo 1)
add_custom_target(flash_test_
    picotool load -f $<TARGET_FILE:lab4_test_fifo> DEPENDS lab4_test_fifo)


add_executable(lab4_test_signal test_signal.c ../src/signal.c unity_config.c)
target_link_libraries(lab4_test_signal PRIVATE
  pico_stdlib
  pico_async_context_freertos
  FreeRTOS-Kernel-Heap4
  pico_cyw43_arch_none
  unity
)
pico_enable_stdio_uart(lab4_test_signal 0)
pico_enable_stdio_usb(lab4_test_signal 1)
add_custom_target(flash_test_signal
    picotool load -f $<TARGET_FILE:lab4_test_signal> DEPENDS lab4_test_signal)
