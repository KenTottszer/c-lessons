#include <stdio.h>

int main()
{
    int r1, r2;
    printf ("Please enter a range\n");
    printf ("Bottom number of range: ");
    scanf ("%d",&r1);
    printf ("Top number of range: ");
    scanf ("%d",&r2);
    while (r1 <=r2)
    {
        printf("%d\n",r1);
        r1 = r1+1 ;
    }
    return 0;
}