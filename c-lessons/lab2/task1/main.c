#include <stdio.h>

int main()
{
    int x;

    printf("Dear user!");
    printf("Enter a number, I will print its square!: ");
    scanf("%d", &x);

    printf("x square is: %d", x*x);
}