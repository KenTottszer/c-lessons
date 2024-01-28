#include<stdio.h>

int main(){

    for (int i = 100; i <+ 1000; i++){
        int flag=1;
        for (int j = 2; j < i/2; j++){
            if(i%j==0){
                flag=0;
            }
        }
        if(flag){
            if(i%10==i/100){
                printf("%d ",i);
            }
        
        
        
    }
    }

return 0;
}