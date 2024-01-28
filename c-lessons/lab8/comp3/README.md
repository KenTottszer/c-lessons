Dynamic arrays: Merge Two Sorted Arrays
Create a C program that merges two sorted dynamic integer arrays into a new sorted dynamic array.
Expected behavior:
Enter the size of the first array: 4
Enter the elements of the first array:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Enter the size of the second array: 3
Enter the elements of the second array:
Element 1: 15
Element 2: 25
Element 3: 35
Merged Sorted Array: 10 15 20 25 30 35 40


Hint: 
Define a function mergeArrays that takes two integer pointers (pointing to the two sorted dynamic arrays), the size of each array, and returns a pointer to the merged sorted dynamic array.

The mergeArrays function should combine the two input arrays into a new sorted array and return a pointer to it.

In the main function, ask the user to input the sizes of the two arrays.

Allocate memory for the two dynamic arrays based on the user input.

Ask the user to input the elements of the two dynamic arrays.

Call the mergeArrays function, passing the two dynamic arrays and their sizes.

Print the merged sorted array.
