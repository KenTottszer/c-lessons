Write a C program that reads a text file named "students.txt" containing information about students. Each line in the file represents a student and is formatted as follows: "Name Age Grade".
The program should read the file, calculate the average age and average grade of the students, and write the results to a new text file named "averages.txt". Additionally, the program should identify the student with the highest grade and the student with the lowest grade and write their names to the "averages.txt" file.

Students.txt:
John 20 85
Emily 19 92
Michael 21 78
Sophia 22 88

averages.txt should be:
Average Age: 20.5
Average Grade: 85.75
Highest Grade: Emily
Lowest Grade: Michael

Hint: You need a struct for data to hold, like:
typedef struct {
char name[50];
int age;
int grade;
} Student;
Do not forget to typecast befor integer division!