#include <stdio.h>


int main ()
{
    int i, prod=1;
    printf ("The factorial of 10 is...\n");
    
    for (i=10; i>=2; i-- )
    prod*=i ;
        printf("%d\n", prod);

    return 0;


}