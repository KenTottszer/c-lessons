#include<stdio.h>

int sumOfDigit(int n){
    if(n<10){
        return n;
    }
    else{
        return (n%10) + sumOfDigit((n/10));
    }
}

int main(){
    int n;
    printf("Type in a number: ");
    scanf("%d", &n);
    int sum = sumOfDigit(n);
    printf("\nSum of the digits of %d is %d\n",n,sum);
    return 0;

}