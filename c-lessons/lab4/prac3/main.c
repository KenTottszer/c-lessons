#include<stdio.h>
int main(){
    int days []={31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day, result;
    scanf("%d.%d.%d",&year,&month,&day);
    for (int i = 1; i < month-1; i++){
        result=result+days[i-1];
    }
    result=result+day;
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        if(month<3){
            result=result+1;
        }
    }
    printf("result = %d\n", result);
    return 0;
}