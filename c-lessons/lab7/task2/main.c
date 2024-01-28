#include <stdio.h>
#include <math.h>

void cube(double edge, double *parea, double *pvolume) {
    *parea = pow(edge, 2) * 6;
    *pvolume = pow(edge, 3);
}

int main() {
    double v;
    double a;
    cube(2.7, &a, &v);
    printf("Volume = %f\nArea = %f\n", v, a);
return 0;
}
