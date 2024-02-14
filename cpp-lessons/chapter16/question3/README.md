Question #3

Write a function that takes a std::vector, returns a std::pair containing the indices of the elements with the min and max values in the array. The documentation for std::pair can be found here. Call the function on the following two vectors:

std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
The program should output the following:

With array ( 3, 8, 2, 5, 7, 8, 3 ):
The min element has index 2 and value 2
The max element has index 1 and value 8

With array ( 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 ):
The min element has index 4 and value 1.2
The max element has index 5 and value 8.8