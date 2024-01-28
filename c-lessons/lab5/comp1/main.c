#include <stdio.h>
int main()
{
    int array[]={10,20,30,40,50};
    for (int i = 0; i < 5; i=i+2)
    {
        printf("%d\n", array[i]);
    }
    
}