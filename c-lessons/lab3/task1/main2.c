#include <stdio.h>
int main ()
{
    int n=1, x=1;

    while (n<=10){

            x=x*n;
            n=n+1;
            printf("%d \n", x);
    }
    return 0;
}