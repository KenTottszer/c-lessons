#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c;
    printf ("value of a: ");
    scanf ("%f", &a);
    printf ("value of b: ");
    scanf ("%f", &b);
    printf ("value of c: ");
    scanf ("%f", &c);
   
    float x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
    float x2 = (-b-sqrt((b*b)-4*a*c))/(2*a);
    
    {
        if (x1 != x2)
        {
            printf ("value of x1 = %f\nvalue of x2 = %f\n", x1, x2);
        }
        
        else
        {
            printf ("value of x = %f\n", x1);
        } 
        
    }
    return 0 ;
}