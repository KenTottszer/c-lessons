#include <stdio.h>

int main(){
    double n; 
    int count=0;
    double sum=0, min, max;
    double avg;

    printf("Student 1's mark is: ");
    scanf("%lf",&n);
    printf("\n");
    min=max=n;
    while (n <=40 && n>=0){
       
        if(n<min) {
            min=n;
        }
        else if(n>max) {
            max=n;
        }
        sum+=n;
        count++;
        printf("Student %d's mark is: ", count+1);
        scanf("%lf",&n);
        printf("\n");
        }
    printf("The average is: %.2lf\nThe min is: %lf\nThe max is: %lf\n", sum/count, min, max);
return 0;
}
    

   
   
       
       



