#include <stdio.h>
int main()
{
    int n, fact, i=2;
    printf("Enter a number to allow us to spit out its factorial: ");
    scanf("%d", &n);
    fact = n*(n-1);
    while (i<n)
    {
       
       fact = fact*(n-i);
       i=i+1;
    }
    printf("%d\n",fact);



}