#include<stdio.h>

int main(){

    int array[5];
    for (int i = 4; i >= 0; i--){
        array[i]=0;

    }
    
    
    int n=0;

   while (n>=0){
    scanf("%d",&n);
    if(n>=0 && n<=15){
        array[0]++;
    }


    if(n>=16 && n<=21){
        array[1]++;
    }


    if(n>=22 && n<=27){
        array[2]++;
    }


    if(n>=28 && n<=33){
        array[3]++;
    }

    if(n>=34 && n<=40){
        array[4]++;
    }

    if(n>40){
        printf("Invalid number. Try again\n");
        continue;
    }
    }

    for (int i = 0; i < 5; i++){
        if(array[i]>=0){
            printf("The mark %d was awarded %d times\n", i+1, array[i]);
        }
    }
    
return 0;
}