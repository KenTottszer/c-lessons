#include<stdio.h>

int main(){
    long double array[12], sum=0;
    for (int i = 0; i < 12; i++){
        scanf("%Lf",&array[i]);
        sum= sum+array[i];
    }
    long double avg;
    avg = sum/12.0;

    for (int i = 0; i < 12; i++){
       if(array[i]<avg){
        printf("%Lf ",array[i]);
       }
    }
    printf("\n");


return 0;
}