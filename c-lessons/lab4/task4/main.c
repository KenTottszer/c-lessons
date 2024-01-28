/*
Functions:
- Restoration of initial value
- Addition of 1
- Negation of number
- Multiple by 2
- Exit
*/


#include <stdio.h>
int n=1;
void initialValue()
{
    n=1;
 
}

void addOne()
{ 
    n=n+1;
    
}

void negateValue()
{
    n=n*-1;
    
}

void multValue()
{
    n=n*2;
    
}

int main()
{
    
    printf ("The initial value of n is 1.\n");
    int i;
do {  
        printf ("Current value of n is: %d\n", n);
        printf("Please select from the following options:\n");
        printf("(0) Restoration of initial value\n(1) Addition of 1\n(2) Negation of number\n(3) Multiple by 2\n(9) Exit\n\n: ");
        scanf ("%d",&i);
   

        switch (i)
        {
        
        case 0: initialValue(); printf(" Inital value has been restored.\n\n"); break;

        case 1: addOne(); printf("Value has been added to by 1. \n\n");  break;

        case 2:  negateValue(); printf("Value has been negated.\n\n"); break;

        case 3: multValue(); printf("Value has been multiplied by 2.\n\n"); break;
        
        case 9: printf("Have a nice day!\n"); break;

        default: printf("This is not an accepted option. Please try again from the options below:\n\n: "); break;
                
        }
        
   }
  while (i!=9);


return 0;
}

