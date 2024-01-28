#include <stdio.h>

int primeFinder(int a)
{
    int c;       
    for (c=2; c<=a-1; c=c+1)
    {
       if(a%c==0)
       return 0;
    }
    return 1;
}

int main ()  
{  
    int i=2, num, count = 0;   

    while (i <= num)  
    {  
        if (primeFinder(i) && primeFinder(i+2))
            if(count<60)
        {   
            count++; 
             printf(" \n The twin prime number is: (%d, %d)\n", i, i+2); 
        }  
        i=i+1;
        
    }  
   
    return 0;  
}  
  
