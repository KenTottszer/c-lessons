#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("The lengths of a triangle are: \n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    
    while (n1>0.0 && n2>0.0 && n3>0.0)
        if (n1==n2 && n1==n3){
            printf("This triangle is equilateral!\n");
        }
        else if(n1==n2 || n1==n3 || n2==n3)    
           { printf("This triangle is isosceles!\n");
        }
        else if (n1!=n2 && n1!=n3){
            printf("This triangle is scalene!\n");
        }
        printf("This is not a triangle!\n");
    return 0;
}