#include <stdio.h>
int main()
{
    int n, i, j;
    printf ("Gepeld be a magassagat: ");
    scanf ("%d", &n);
    for (i=1;i<=n;i=i+1)
    {
     for(j=n-i;j>=1;j=j-1)
        printf (" ");
     for (j=1;j<=2*i-1;j=j+1)
        printf ("O");
     printf("\n");
    }
    
    return 0;
}