#include <stdio.h>
int main ()
{
    int i, n;
    printf ("How many times should I print the message?  ");
    scanf("%d", &n);
    for (i=1; i<=n; i=i+1)
        printf ("I will pass the test!\n");

    return 0;


}