#include<stdio.h>
#define SIZE 10

int main(){

    int array[SIZE]={};

    for (int i = 0; i < SIZE; i++){
        printf("\nNumber %d is: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\n");
    
    int count=0;
    while (count<SIZE){
        for (int j = 0; j < SIZE; j++){
            printf("%d ",array[j]);
            }
        int first=array[0];
        printf("\n"); 
        for (int i = 0; i < SIZE-1; i++){
            array[i]=array[i+1];
        
        }
        array[9]=first;
        count++;
    }

    printf("\n"); 

return 0;
}

