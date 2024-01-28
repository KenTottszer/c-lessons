#include <stdio.h>

int main()
{
   int stu;
    printf("How many students are there in the class: ");
    scanf("%d", &stu);
    while (stu <= 0) {
        printf("\nInvalid number of students. How many students are there in the class: ");
         scanf("%d", &stu);
    }
    
        int i=1;
        double classAvg = 0;
        double classLowGrade=100;
        double lowGrade;
        double classHighGrade=0;
        double highGrade;

        while(i<=stu){
            double numGrade1, numGrade2, numGrade3, numGrade4;
            int num=(stu)-(stu-i);
            
            printf("What is student %d's first grade: ",num);
            scanf("%lf", &numGrade1);
            while(numGrade1<0 || numGrade1>100){
                printf("Invalid. What is student %d's first grade: ",num);
                scanf("%lf", &numGrade1);
            }
            printf("What is student %d's second grade: ",num);
            scanf("%lf", &numGrade2);
            while(numGrade2<0 || numGrade2>100){    
                printf("Invalid. What is student %d's second grade: ",num);
                scanf("%lf", &numGrade2);
            }   
            printf("What is student %d's third grade: ",num);   
            scanf("%lf", &numGrade3);  
            while(numGrade3<0 || numGrade3>100){    
                printf("Inavlid. What is student %d's third grade: ",num);
                scanf("%lf", &numGrade3);
            }    
            printf("What is student %d's fourth grade: ",num);
            scanf("%lf", &numGrade4);
            while(numGrade4<0 || numGrade4>100){    
                printf("Invalid. What is student %d's fourth grade: ",num);
                scanf("%lf", &numGrade4);
            }

            double avg = (numGrade1 + numGrade2 + numGrade3 + numGrade4)/4;
            printf("\n\nStudent %d's average grade is: %f\n",num, avg);
            if (num>1){   
                classAvg=classAvg+avg;
            }
            else{
                classAvg=avg;
            }

            if (numGrade1< numGrade2 && numGrade1<numGrade3 && numGrade1<numGrade4){
                printf("Student %d's  lowest grade is: %f\n", num, numGrade1);
                lowGrade=numGrade1;
            }
            else if(numGrade2<numGrade3 && numGrade2<numGrade4){
                printf("Student %d's lowest grade is: %f\n", num, numGrade2);
                lowGrade=numGrade2;
            }
            else if(numGrade3<numGrade4){
                printf("Student %d's lowest grade is: %f\n", num, numGrade3);
                lowGrade=numGrade3;
            }
            else{
                printf("Student %d's lowest grade is: %f\n", num, numGrade4);
                lowGrade=numGrade4;
            }   
            while (classLowGrade>lowGrade){
                classLowGrade=lowGrade;
            }
            
            if (numGrade1> numGrade2 && numGrade1>numGrade3 && numGrade1>numGrade4){
                printf("Student %d's highest grade is: %f\n\n", num, numGrade1);
                highGrade=numGrade1;
            }
            else if(numGrade2>numGrade3 && numGrade2>numGrade4){
                printf("Student %d's highest grade is: %f\n\n", num, numGrade2);
                highGrade=numGrade2;
            }
            else if(numGrade3>numGrade4){
                printf("Student %d's highest grade is: %f\n\n", num, numGrade3);
                highGrade=numGrade3;
            }
            else{
                printf("Student %d's highest grade is: %f\n\n", num, numGrade4);
                highGrade=numGrade4;
            }
            while (classHighGrade<highGrade){
                classHighGrade=highGrade;
            }
            i=i+1;
        }
        classAvg=classAvg/stu;
        printf("\nClass average: %f\nLowest grade in class: %f\nHighest grade in class: %f\n", classAvg, classLowGrade, classHighGrade);
    
}
