#include <stdio.h>
int main ()
{
    double a, b, c, prod, i;
    a=2.0;
    b=1.0;
    c=3.0;
    // while (n<=10)
    // {
    for (i = 1.0; i <=20.0; i++)
    {
        prod=((a*a)/(b*c));
        a=a+2.0;
        b=b+2.0;
        c=c+2.0;
        prod*=prod;

    }
    prod=prod*2.0;
    printf("%lf \n", prod);  
       
        
        // n=n+1;
        
    // }
    
        
    return 0;
}