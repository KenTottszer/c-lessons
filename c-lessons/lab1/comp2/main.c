#include <stdio.h>
#include <math.h>

int main ()
{
    int given;
    printf ("Time Converter\nHow many seconds do you want to convert?  ");
    scanf ("%d", &given);
    
    int a, b, c;
    a = given/3600;
    b = (given % 3600)/60;
    c = given % 60;

    printf ("Your number in hours, minutes and seconds is:\n %02dhour(s), %02dminute(s), %02dsecond(s)\n", a, b, c);

    return 0;


}