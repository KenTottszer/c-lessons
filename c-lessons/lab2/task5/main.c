#include <stdio.h>
int main ()
{
    int n, i ;
    printf ("How many units should the graphic be? ");
    scanf ("%d",&n);
    printf ("+");
    for (i=1; i<=n; i=i+1)
    {
        printf ("-");
    }
    printf ("+\n");
    
    return 0;


}