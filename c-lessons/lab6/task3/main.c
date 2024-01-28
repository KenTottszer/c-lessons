#include <stdio.h>
#include <stdbool.h>
#include <math.h>

 
typedef struct point {
    int x, y;
} point;
 
double distance(point p1, point p2) {
    return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
}
 
bool equal(point p1, point p2) {
    return   p1.y == p2.y && p1.x == p2.x;
}
 
point userScan() {
    point c;
    scanf("%d %d", &c.x, &c.y);
    return c;
}
 
int main() {
   
    printf("First point:\n");
    point first;
    first = userScan();    
    double length = 0;
    printf("Next points:\n");
    point prev, next;  
    first = prev;
    do {
        next = userScan();
        length += distance(prev, next);
        prev = next;        
    } while (!equal(next, first));
 
   
    printf("A length: %f\n", length);
 
    return 0;
}