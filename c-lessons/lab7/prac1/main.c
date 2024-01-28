#include<stdio.h>

typedef struct Rat{
    int num;
    int den;
}Rat;

Rat scanRat(){
    Rat r;
    printf("give me a rational number?\n");
    scanf("%d/%d",&r.num, &r.den);
    return r;
}

void printRat(Rat r){
    printf("%d/%d\n ",r.num, r.den);
}

Rat addRat(Rat x, Rat y){
    Rat r;
    r.num= x.num*y.den + y.num*x.den;
    r.den=x.den*y.den;
    return r;
}

Rat mulRat(Rat x, Rat y){
    Rat r;
    r.num=x.num*y.num;
    r.den=x.den*y.den;
    return r;
}

int main(){
    Rat x;
    x=scanRat();
    Rat y;
    y=scanRat();
    printf("The sum of the the two rational numbers is: ");
    printRat(addRat(x,y));
    printf("\nThe product of the the two rational numbers is: ");
    printRat(mulRat(x,y));
    printf("\n");

return 0;
}