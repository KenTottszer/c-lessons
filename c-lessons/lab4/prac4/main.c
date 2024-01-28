#include<stdio.h>
int main(){
    int num;
    int digit;
    int monies[]={20000, 10000, 5000, 2000, 1000, 500,200, 100, 50, 20, 10, 5, 0};
    printf("How much money would you like to check for: ");
    scanf("%d",&num);
    for (int i = 0; monies[i] != 0; i += 1) {
        int pcs = num/monies[i];
        if (pcs > 0) {
            printf("%d pcs %d Ft banknote.\n", pcs, monies[i]);
            /* Multiplying back by "pcs" we have the amount given out so far. */
            num -= pcs*monies[i];
        }
}
    if (num != 0)
        printf("There is no such small coin/banknote: %d Ft\n", num);
    return 0;

}

