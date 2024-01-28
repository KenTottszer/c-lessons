#include <stdio.h>

int main(){
    int array[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day, result=0;
    scanf("%d.%d.%d",&year, &month, &day);

    for (int i = 0; i < array[month]; i++){
        result=result+month;
    }
    result=result+day;
    
    if((year%4==0)&&(year%100!=0)||(year%400==0)){{
        result=result+1;
    }
    printf("Result is: %d\n", result);
    }
return 0;    
}
