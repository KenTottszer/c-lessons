#include <stdio.h>

int main(){
    int a,b;
    a = 5;
    b = 10;
    int *pA, *pB;
    pA = &a;
    pB = &b;

    printf("point a: %d\npoint b: %d\n", a, b);

    *pA = *pA + *pB;
    *pB = *pA-*pB;
    *pA = *pA-*pB;

    printf("point a: %d\npoint b: %d\n", a, b);


return 0;
}