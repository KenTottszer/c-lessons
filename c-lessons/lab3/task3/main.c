#include <stdio.h>

int main ()
{
    printf ("The natural number e is aprrox: \n");
    double i=1, fact=1, sum;

   while (fact<=20)
   {
            i=i*fact;
            fact=fact+1;    
            sum=sum+(1/fact); 
            
   }
   printf("%lf \n", sum); 
  return 0;

}
