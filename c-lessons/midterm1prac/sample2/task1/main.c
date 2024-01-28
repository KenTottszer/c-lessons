#include<stdio.h>

int main(){
    char c;
    printf("Type in whatever you want and end it with enter!\n\n");
    int sum=0;
    do{
        scanf("%c",&c);
        if(c>='A' && c<='Z' ||c>='a' && c<='z'){
            sum++;
        }
    }while(c!='\n');
    printf("sum of digits is: %d\n", sum);
return 0;
}