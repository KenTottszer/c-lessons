#include<stdio.h>
int main(){
   
    int array[10]={25, 69, 54, 8, 77, 6, 29, 10, 3, 98};
   int min =array[0];
    for (int i=1; i < 10;i=i+1){
        if(array[i]<min){
            min=array[i];   
        }
    }   
    printf("The smallest element is %d\nThe elements of the array with the smallest element marked are: \n", min);
    for (int j = 0; j< 10; j++){
        if(array[j]!=min){
            printf("%d ",array[j]);
        }
        else if(array[j]==min){
            printf("%d(MIN!!!) ",array[j]);
        }
        

    }
    printf("\n");
    
    
    

return 0;
}