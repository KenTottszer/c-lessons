#include<stdio.h>
int main(){
    char c;
    int product=1;
    printf("write some text!\n");
    while (c!='\n'){
        scanf("%c",&c);
        if(c>='0'&& c<='9'){
            product=product*(c-'0');
        }
    }
    printf("%d\n",product);
    

return 0;
}