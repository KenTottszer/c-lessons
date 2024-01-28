#include <stdio.h>
#include <math.h>

typedef struct values{
    float x;
    float y;
    float r;
}values;

float circleOverlap(values c1, values c2){
    return sqrt(pow(c1.x-c2.x, 2)+pow(c1.y-c2.y, 2)) < c1.r+c2.r;

}

values circleInput(){
    values c;
    printf("What are your values for x, y and z? \n");
    scanf("%f %f %f", &c.x, &c.y, &c.r);
    return c;
} 

int main(){
    values a, b;
    a = circleInput();
    b = circleInput();
    if(circleOverlap(a, b)){
     printf("They overlap.\n");
    }
    else{
        printf("They do not overlap.\n");
    }
return 0;
}