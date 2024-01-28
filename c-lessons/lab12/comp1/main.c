#include <stdio.h>
#include <math.h>

int recursion(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * recursion(n-1);
    }

}
int main(){
    int n;
    printf("Type in a number: ");
    scanf("%d", &n);
    int fact = recursion(n);
    printf("\nFactorial of %d is %d\n", n, fact);
    return 0;
}