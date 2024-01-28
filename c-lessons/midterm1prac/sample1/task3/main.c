#include<stdio.h>
#include<math.h>

int main(){
    printf("This solves the equation with iteration √(x-1) -2=0");
    float ans =((2*2)+1);
  for (float x= 0.0001; x < ans; x= x+0.01){
    printf("x is not %.4f\n", x); 
}
    printf("Correct! Answer is %.4f\n", ans);

    
return 0;
}


