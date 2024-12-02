# Lab 04 Signaling


# Test_Fifo.c Results
Launching runner <br>
Starting test run
Sending messages
Got result 0 for 5, handled by thread 0
Got result 1 for 6, handled by thread 1
Got result 2 for 7, handled by thread 2
Got result 3 for 8, handled by thread 3
Got result 4 for 9, handled by thread 0
Got result 6 for 11, handled by thread 2
Got result 5 for 10, handled by thread 1
Got result 7 for 12, handled by thread 3
Got result 8 for 13, handled by thread 0
Got result 9 for 14, handled by thread 2
Got result 10 for 15, handled by thread 1
Got result 11 for 16, handled by thread 3
Got result 12 for 17, handled by thread 2
Got result 13 for 18, handled by thread 0
Got result 15 for 20, handled by thread 3
Got result 14 for 19, handled by thread 1
Got result 17 for 22, handled by thread 0
Got result 16 for 21, handled by thread 2
Got result 18 for 23, handled by thread 3
Got result 19 for 24, handled by thread 1
Got result 21 for 26, handled by thread 2
Got result 20 for 25, handled by thread 0
Got result 22 for 27, handled by thread 3
Got result 23 for 28, handled by thread 1
Got result 24 for 29, handled by thread 2
Got result 25 for 30, handled by thread 0
Got result 26 for 31, handled by thread 1
Got result 27 for 32, handled by thread 3
Got result 28 for 33, handled by thread 2
Got result 29 for 34, handled by thread 0
Got result 30 for 35, handled by thread 1
Got result 31 for 36, handled by thread 3
Done
/test_fifo.c:126:test_full:PASS
/test/test_fifo.c:127:test_nothing:PASS
/test_fifo.c:128:test_single:PASS
/test_fifo.c:130:test_all_alone:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK


# Test_Signal.c Results
Launching runner
Starting test run.
+ Waiting for request
/test/test_signal.c:119:test_noop:PASS
+ Waiting for request
/test/test_signal.c:120:test_out_of_order:PASS
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
- Handoff to worker
- Waiting for results
+ Waiting for request
+ Handling calculation
+ Done with calculation
- Result ready
/test/test_signal.c:121:test_request:PASS
- Handoff to worker
- Waiting for results
- Result ready
/test/test_signal.c:122:test_noone_home:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
