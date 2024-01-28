#include<stdio.h>
#include <stdlib.h>

void Add_one(double** Arr,int* size){
    double new_elem;
    printf("give a new element:\n");
    scanf("%lf",&new_elem);
 
    double* Arr2=(double*)malloc((*size+1)*sizeof(double));
 
    for(int i=0; i<*size; i++){
        Arr2[i]=(*Arr)[i];
    }
    free(*Arr);
    Arr2[*size]=new_elem;
 
    *Arr=Arr2;
    (*size)++;//Careful! ++ has higher precendence than *!
 
    return;
 
 
}
 
int main()
{
    int size=0;
    double* Arr=NULL;
    for(int i=0;i<3;i++){
        Add_one(&Arr,&size);
    }
    for(int i=0;i<3;i++){
        printf("%f\t",Arr[i]);
    }
    return 0;
}
 
 





// int main(){
//     int* dynamic=NULL;
//     int size = 0;
//     printf("Type in as many numbers as you want below:\n\n");

    

// }