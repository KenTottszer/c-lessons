#include<stdio.h>
int main(){
    int sum=0;
    int array[12]= {10,20,30,40,50,60,70,80,90,100,110,120};
    int i=0;
    while (i<12)
    {
        sum=sum + array[i];
        i++;
    }
    printf("%d\n",sum);
return 0;
}