#include <math.h>
#include <stdio.h>

int main ()
{
    int n, i=1;
    printf ("Type in a number? ");
    scanf ("%d", &n);

   int div, sum;
   
   printf ("The sum equation of your numbers divisors is: \n");
   for (i=1; i<n; i=i+1)
        if (n%i==0)
        { 
             div = n/i;
            printf ("%d + ", div);
        }
        printf ("1 \n\n");

    for (i=1; i<=n; i+=1)
        if (n%i==0)
        { 
             div = n/i;
             sum = div + sum;
        }
   printf ("The sum of this equation is: %d\n", sum);   

    return 0;
}
