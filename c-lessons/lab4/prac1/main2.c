#include<stdio.h>

int main(){
    int num;
    int array[10];

    for (int i = 0; i < 10; i++){
        array[i]=0;
    }
    
    while (scanf("%d",&num)==1){
        if(num<=10 && num>=1){
            array[num-1]++;
        }
        else{
            printf("bad number");
        }
    }

    for (int i = 0; i < 10; i++){
        if(array[i]>0){
            printf("The number %d has occured %d times\n", i+1, array[i]);
        }
    }
    
    
    



}