#include <stdio.h>
#include <math.h>

int main ()

{
    float height, width;
    printf ("What is the height of the rectangle to two decimal places?  ");
    scanf ("%f",&height);
    printf ("What is the width of the rectangle to two decimal places?  ");
    scanf ("%f", &width);

    float area ;
    area = height*width ;
    printf ("Your rectangles area is %2f\n", area);

    return 0;


}