#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_TEXT "students.txt"
#define A_TEXT "averages.txt"
#define SIZE 50

typedef struct Student{
    char name[SIZE];
    int age;
    int grade;


}Student;

int main(){
   FILE* studentsFile;
   Student r[SIZE];
    int count = 0;
    studentsFile = fopen(S_TEXT, "r");
    
    if (studentsFile != NULL) {
        while (fscanf(studentsFile, "%49s %d %d", r[count].name, &r[count].age, &r[count].grade) == 3){
            count++;
        }}
    fclose(studentsFile);

    double avgAge, avgGrade;
    double sumAge = 0, sumGrade = 0; 
    char bestName[SIZE], worstName[SIZE];
    strcpy(bestName, r[0].name);
    strcpy(worstName, r[0].name);

    int best, worst;
    best = worst = r[0].grade;
    for (int i = 0; i < count; i++) {
        if (r[i].grade > best) {
            best = r[i].grade;
            strcpy(bestName, r[i].name);
        }
        if (r[i].grade < worst) {
            worst = r[i].grade;
            strcpy(worstName, r[i].name);
        }
        sumAge += r[i].age;
        sumGrade += r[i].grade;
    }
    avgAge = sumAge / count;
    avgGrade = sumGrade / count;

    FILE* averagesFile;
    averagesFile = fopen(A_TEXT, "w");
    if (averagesFile != NULL) {
    fprintf(averagesFile, "Average Age: %3lf\nAverage Grade: %3lf\n Name of person with best result: %s\n Name of person with worst result: %s\n", avgAge, avgGrade, bestName, worstName );
    }
    
    return 0;

}

