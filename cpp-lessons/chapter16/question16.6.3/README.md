Question #3

Given the solution for quiz 2, do the following:

Ask the user for a value between 1 and 9. If the user does not enter a value between 1 and 9, repeatedly ask for an integer value until they do. If the user enters a number followed by extraneous input, ignore the extraneous input.
Print the array.
Write a function template to search the array for the value that the user entered. If the value is in the array, return the index of that element. If the value is not in the array, return an appropriate value.
If the value was found, print the value and index. If the value was not found, print the value and that it was not found.
We cover how to handle invalid input in lesson 9.5 -- std::cin and handling invalid input.

Here are two sample runs of this program:

Enter a number between 1 and 9: d
Enter a number between 1 and 9: 6
4 6 7 3 8 2 1 9
The number 6 has index 1
Enter a number between 1 and 9: 5
4 6 7 3 8 2 1 9
The number 5 could was not found