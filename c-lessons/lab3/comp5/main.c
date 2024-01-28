#include<stdio.h>
int main()
{
    int n, digit, sum=0;
    printf("Print a positive integer and I will tell you the sum of the digits.\n--> ");
    scanf("%d", &n);

    while (n>0)
    {
        digit= n%10;
        n=n/10;
        sum= sum + digit; 
    }
    
    printf("The sum of the digits of your number is: %d\n", sum);


}