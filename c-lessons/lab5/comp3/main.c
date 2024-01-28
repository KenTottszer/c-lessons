#include<stdio.h>
int main(){
    int number;
    int found=0;
    int array[7]={5,10,15,20,25,30,35};
    printf("Guess the positive integer: ");
    scanf("%d", &number);
    for (int i = 0; i < 7; i++)
    {
        if(array[i]==number){
        found=1;
        break;
        }
    }
    if (found){
        printf("number %d is correct\n", number);
    }
    else{
        printf("number %d is not correct\n", number);
    }
return 0;        
}
    
    

