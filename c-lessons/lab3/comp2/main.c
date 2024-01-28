#include <stdio.h>
int main ()
{
    int n;
    printf("Type in a year: ");
    scanf("%d", &n);

    if (n%400 ==0){
        printf("This is a leap year!\n");
    }
    else if (n%100==0){
        printf("This is NOT a leap year!\n");
    }
    else if (n%4==0){
        printf("This is a leap year!\n");
    }
    else{
        printf("This is NOT a leap year!\n");
    }

return 0;
}