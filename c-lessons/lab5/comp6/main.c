#include <stdio.h>
#define SIZE 5
int main(){

    printf("Enter an array of 5 numbers: \n");
    int array[SIZE];
    for(int i=0; i<SIZE; i++){
        scanf("%d", &array[i]);
    }

    printf("The reverse order of the original 5 numbers are: \n");
    for (int j = 4; j >=0; j--){
         printf("%d\n", array[j]);
    }
return 0;
}