#include <stdio.h>
#include <math.h>


double cubeNumber(double n)
{
    double cubed;
    cubed = n*n*n;
    return cubed;
}

double absoluteNumber(double m)
{
    double absolute;
    if (m<0){
        return absolute = m *-1;
    }
    else{
        return m;
    }

}

double sinNumber (double q)
{
    double sinN;
    sinN = sin(q);
    return sinN;

}

int main ()
{
    double num;
    printf ("Type in your number: ");
    scanf ("%lf",&num);
    printf ("Number: %f\nCubed: %f\nAbsolute: %f\nSin: %f\n", num, cubeNumber(num), absoluteNumber(num), sinNumber(num));
    return 0;

}