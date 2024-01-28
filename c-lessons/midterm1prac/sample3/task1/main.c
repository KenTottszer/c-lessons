#include <stdio.h>
int main (){
    char c;
    printf("Type in a line and terminate it by pressing enter and I will give the product of each digit.\n");
    int product=1;
    do{
        scanf("%c",&c);
        if(c>='0' && c<='9'){
            product = product * (c-'0');
       } 

    }while(c!='\n');
    printf("The product of the numbers are %d\n", product);

return 0;
}