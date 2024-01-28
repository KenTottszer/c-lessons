#include<stdio.h>
int main(){
    int n, avg, sum=0;
    int array[12];
    

    for (int i = 0; i < 12; i++){
        printf("Number %d is: ",i+1);
        scanf("%d",&n);
        array[i]=n;
        sum=sum+n;
    }
    avg=sum/12;
      printf("Numbers which are bigger than the average %d are: ", avg);
    for(int j=0; j<12; j++){
        if (array[j]>avg){
            printf("%d ",array[j]);
        }
    
    }
    printf("\n");
    


return 0;
}