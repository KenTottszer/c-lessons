#include <stdio.h>
int main ()
{
    int num1, num2, num3;
    printf("Type in three numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1>num2 && num1>num3){
        printf ("The largest of these numbers is %d\n",num1);
    }
    else if(num2>num3 ){
        printf("The largest of these numbers is %d\n", num2);
    }
    else{
        printf ("The largest of these numbers is %d\n", num3);
    }
    return 0;


    

}



