#include<stdio.h>

void f(int* pi){
    *pi += 2;
}

int main(){
    int i = 0;
    f(&i);
    printf("%d\n", i);
    return 0;
}


//c-good