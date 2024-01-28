#include<stdio.h>



int main(){
    double array[30];
    double sum=0, avg, max;

    for (int i = 0; i < 30; i++){
        printf("Number %d is: ",i+1);
        scanf("%lf",&array[i]);
        sum=sum + array[i];
    }
    max=array[0];
    for (int i = 0; i < 30; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    avg=sum/30;
    for (int i = 0; i < 30; i++){
        if(array[i]==max){
        printf("%.2lf ",avg);
        }
        else{
            printf("%.2lf ",array[i]);
        }

    }
    printf("\n");
    
   
    




return 0;
}