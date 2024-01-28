5. Highway I.

An automatic speed control unit on a highway delivers data of the speeding cars only for several days in the following format: „hours minutes speed”. For example 12 45 198 means that at 12:45 some car passed by at a speed of 198 km/h. Data is terminated by 0 0 0.

Write a C program that reads the data (several hours-minutes-speed triplets, until the terminating 0-0-0 triplet) and prints a table with the fastest speeding car in every hour! If there was no car violating the speed limit in a given hour, exclude that interval from the output. The output should be like:
