#include <stdio.h>
int main()
{
    int num;
    printf("Print a number corresponding to the month: ");
    scanf("%d", &num);
    while (num < 1 || num>12){
     printf("Not a number corresponding to the month. Please enter a month number from 1 to 12. \n");
     scanf("%d", &num); 
    }
    if (num >= 1 && num <= 12){
        if (num>=3 && num<=5){
            printf("It is spring\n");
        }
        else if(num>=6 && num<=8){
            printf("It is summer\n");
        }
        else if(num>=9 && num<=11){
            printf("It is autumn\n");
        }
        else if(num==12 || num==1 || num==2){
            printf("It is winter\n");
        }    
    }
    return 0;

}