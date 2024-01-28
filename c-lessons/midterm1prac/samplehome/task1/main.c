#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int primeFinder(int p){
    int t=2;
    while (p%t!=0 && t<=sqrt(p)){
        ++t;
    }
    return p%t!=0;
}

int numDivider(int p){
    int num=0;
    for (int i = 1; i <=p; ++i){
       if(p%i==0){
        ++num;
       }
    }
    return num;
}


int main(){
    for ( int i = 0; i < 1000; ++i){
        if(primeFinder(i)&&(numDivider(i+1)==14))
           printf("%d and %d\n", i, i+1);
    }     
return 0;    
}
