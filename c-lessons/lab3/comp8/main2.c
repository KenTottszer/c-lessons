#include <stdio.h>
 
int main() {
    int numStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    if (numStudents <= 0) {
        printf("Invalid number of students. Please enter a positive integer.\n");
        return 0;
    }
    
    int student = 1;
    int classTotalGrade = 0;
    int classMinimumGrade = 100;
    int classMaximumGrade = 0;
    
    while (student <= numStudents) {
        printf("\nStudent %d:\n", student);
        
        int numGrades;
        
        do {
            printf("Enter the number of grades for Student %d: ", student);
            scanf("%d", &numGrades);
            
            if (numGrades < 0) {
                printf("Invalid number of grades. Please enter a non-negative integer.\n");
            }
        } while (numGrades < 0);
        
        if (numGrades > 0) {
            int gradeNumber = 1;
            int totalStudentGrade = 0;
            int minimumGrade = 100;
            int maximumGrade = 0;
            
            while (gradeNumber <= numGrades) {
                int grade;
                
                printf("Enter Grade %d for Student %d: ", gradeNumber, student);
                scanf("%d", &grade);
                
                if (grade < 0 || grade > 100) {
                    printf("Invalid grade. Please enter a grade between 0 and 100.\n");
                    continue;
                }
                
                totalStudentGrade += grade;
                
                if (grade < minimumGrade) {
                    minimumGrade = grade;
                }
                
                if (grade > maximumGrade) {
                    maximumGrade = grade;
                }
                
                gradeNumber++;
            }
            
            double averageGrade = (double)totalStudentGrade / numGrades;
            
            printf("Average Grade: %.2f\n", averageGrade);
            printf("Minimum Grade: %d\n", minimumGrade);
            printf("Maximum Grade: %d\n", maximumGrade);
            
            classTotalGrade += totalStudentGrade;
            
            if (minimumGrade < classMinimumGrade) {
                classMinimumGrade = minimumGrade;
            }
            
            if (maximumGrade > classMaximumGrade) {
                classMaximumGrade = maximumGrade;
            }
        } else {
            printf("No grades entered.\n");
        }
        
        student++;
    }
    
    double classAverage = (double)classTotalGrade / numStudents;
    
    printf("\nClass Average: %.2f\n", classAverage);
    printf("Class Minimum Grade: %d\n", classMinimumGrade);
    printf("Class Maximum Grade: %d\n", classMaximumGrade);
    
    return 0;
}