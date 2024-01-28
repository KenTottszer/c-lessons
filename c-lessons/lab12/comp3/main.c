#include<stdio.h>


double power(double num, int exp){
    if(exp == 0){
        return 1;
    }
    else if(exp>0){
        return num*power(num, exp-1);
        
    }
    else{
        return 1.0/(num*power(num, -exp-1));
    }



}

int main(){
    double num;
    int exp;
    printf("Type in a number and then how much you want it to be powered by.\n\n");
    printf("Num: ");
    scanf("%lf", &num);
    printf("Exponent: ");
    scanf("%d", &exp);

    double result = power(num, exp);
    printf("Result is %2lf\n", result);
    return 0;




}