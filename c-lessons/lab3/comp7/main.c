#include <stdio.h>




int main ()
{
    int n, i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        printf("Amount of incorrect numbers entered so far: %d\nEnter a number: ",i);
        scanf("%d",&n);
        i=i+1;
    }
    printf("Good Job. That was done in %d!\n",i);
    
    
    
    return 0;
}