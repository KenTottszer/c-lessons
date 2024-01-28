#include<stdio.h>

int main(){
    float n;
    n=1.4422;
    for (float i = 0.000; i < n; i=i+0.001){
       printf("%.4f\n", i);
    }
    printf("%.4f\n", n);
    
return 0;
}