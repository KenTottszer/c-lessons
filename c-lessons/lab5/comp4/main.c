#include <stdio.h>
int main(){
    double num1, num2, num3, num4, num5;
    
    printf("We are finding the sum & average of the next 5 numbers you put in.\n");
    printf("Your first number: ");
    scanf("%lf", &num1);
    printf("\nYour second number: ");
    scanf("%lf", &num2);
    printf("\nYour third number: ");
    scanf("%lf", &num3);
    printf("\nYour fourth number: ");
    scanf("%lf", &num4);
    printf("\nYour fifth number: ");
    scanf("%lf", &num5);

    double array[5]={num1, num2, num3, num4, num5};
    double sum=0;
    for (int i = 0.0; i < 5.0; i++)
    {
       sum = sum+ array[i];
    }
    printf("\nSum is: %f",sum);
    printf("\nAverage is: %f\n", sum/5);
    
return 0;

}