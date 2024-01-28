#include<stdio.h>
int main(){
    float n;
    n=1.2599-1;
    for (float i = 0; i < n; i=i+0.001){
        printf("%.4f\n",i);
    }
    printf("%.4f\n", n);
    
return 0;
}


// #include <stdio.h>
// int main(void){
//     double eps, value=0;
//     scanf("%lf",&eps);
//     if(eps>0.0001) 
//         eps=0.0001; 
//     while(value*value*value-2<eps) 
//     value+=eps;
//     printf("%.4f\n",value-1);
// }