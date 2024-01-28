#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c;
    printf ("Choose three numbers to be averaged\n\n First number: ");
    scanf ("%f", &a);
    printf ("Second number: ");
    scanf ("%f", &b);
    printf ("Third number: ");
    scanf ("%f", &c);

    float avg;
    avg = (a+b+c)/3;
    printf ("Your average is: %2f\n", avg);
    
    return 0;


}