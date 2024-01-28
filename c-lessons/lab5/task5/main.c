#include <stdio.h>
#define SIZE 24

int main() {
    int hours, minutes, speed;
    int maxSpeed[]={0};
    
    printf("Type in the hour, the minutes and the speed.\n");
    printf("Hour: ");
    scanf("%d", &hours); 
    printf("\nMinutes: ");
    scanf("%d", &minutes); 
    printf("\nSpeed: ");
    scanf("%d", &speed); 
       
        
      while (speed != 0) {
      if (speed > maxSpeed[hours])
         maxSpeed[hours] = speed;
      scanf("%d %d %d", &hours, &minutes, &speed);
   }

   for (int i = 0; i < 24; i = i + 1)
      if (maxSpeed[i] > 0){
         printf("%2d:00-%02d:59 -> %d km/h\n", i, i, maxSpeed[i]);
      }
    return 0;
}


    
   

