Quiz time

Question #1

Define a std::vector with the following names: “Alex”, “Betty”, “Caroline”, “Dave”, “Emily”, “Fred”, “Greg”, and “Holly”. Ask the user to enter a name. Use a range-based for loop to see if the name the user entered is in the array.

Sample output:

Enter a name: Betty
Betty was found.
Enter a name: Megatron
Megatron was not found.
Hint: Use std::string to hold the string the user inputs.
Hint: std::string_view is cheap to copy.



Question #2

Modify your solution to quiz 1. In this version, create a function template (not a normal function) called isValueInArray() that takes two parameters: a std::vector, and a value. The function should return true if the value is in the array, and false otherwise. Call the function from main() and pass it the array of names and the name the user entered.

Reminder:

A function template that is using template argument deduction (when template type arguments are not explicitly specified) will not do conversions to match the template type parameters. The call either matches the template (and the template type can be deduced) or it doesn’t.
A function template with an explicitly specified template type argument will convert arguments to match the parameter type (since the type is known).