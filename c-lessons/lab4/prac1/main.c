#include <stdio.h>

int main(){
int n;
int count[10];

for (int i=0;i<10; i++){
    count[i]=0;
}
while(scanf("%d",&n)==1){
    if(n>=1 && n<=10){
        count[n-1]++;
    }
    else{
        printf("Bad Number");
    }
}
for(int i=0; i<10;i++){
    if(count[i]>0){
        printf("Number %d --> %d times\n",i+1, count[i]);
    }
}
return 0;
}


