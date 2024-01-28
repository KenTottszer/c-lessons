#include <stdio.h>
int main(){

    int n;
    int array[]={0,0,0,0,0};
    printf("type in a mark: ");
    scanf("%d",&n);
    while (n>-1 && n<41){
        
        if(n<16){
            array[0]++;
        }
         else if(n<22){
            array[1]++;
        }
         else if(n<28){
            array[2]++;
        }
         else if(n<34){
            array[3]++;
        }
         else if(n<41){
            array[4]++;
        }
        printf("\ntype in another mark: ");
        scanf("%d",&n);
       
    }
    for (int i = 0; i < 5; i++){
        printf("Grade %d: %d\n", i+1, array[i]);
       
    }
return 0;
}


// #include <stdio.h>
// int main(){
//     int a[]={0,0,0,0,0}; //1p for all declarations; 1p for initialization
//     int n;
//     scanf("%d",&n); //1p
//     while(n>-1){ //3p: 1p if the if-else structure is OK; 2p if the operations are OK.
//         if(n<16) 
//         {a[0]++;
//         }
//         else if (n<22) 
//         {a[1]++;
//         }
//         else if(n<28) 
//         {a[2]++;
//         }
//         else if (n<34) {a[3]++;}
//         scanf("%d",&n);//1p
//         }
//         for(int i=0;i<5; i++){ //1p for loop)
//             printf("%d:%d ",i,a[i]); //1p
// return 0;
// }
// }