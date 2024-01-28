#include <stdio.h>
int main (){
    int array[1000];
    for (int i = 0; i < 1000; i++){
        if(i<2){
            array[i]=0;
        }
        else{
            array[i]=1;
        }
    }
    for (int i = 0; i < 1000; i++){
        if(array[i]==1){
            printf("Prime = %d\n", i);
            for (int j = 2*i; j < 1000; j=j+i){
                array[j]=0;
            }
            
        }
    }
return 0;
}