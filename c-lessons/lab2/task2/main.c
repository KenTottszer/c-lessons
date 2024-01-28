#include <math.h>
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2;
    printf("Enter first x value: ");
    scanf("%f", &x1);
    printf("Enter first y value: ");
    scanf("%f", &y1);
    printf("Enter second x value: ");
    scanf("%f", &x2);
    printf("Enter second y value: ");
    scanf("%f", &y2);

    float distance;

    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Euclidean distance: %f\n", distance);

    return 0;
}
