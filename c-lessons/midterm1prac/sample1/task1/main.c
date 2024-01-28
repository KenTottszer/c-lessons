#include <stdio.h>

int main(){
   char c;
int sum=0;
    do{
        scanf("%c",&c);
        if(c>='0'&&c<='9'){
            sum+=c-'0';
        }    
    }while(c!='\n');
printf("%d\n",sum);

 
   
return 0;
}



