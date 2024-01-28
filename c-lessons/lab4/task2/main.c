#include <stdio.h>
#include <ctype.h>

int vowelTester(char c)
{
    c = tolower(c);
    
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

}






int main(void) {
    char c;
    while (scanf("%c", &c) == 1) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            printf("%ch%c", c, c);
        else
            printf("%c", c);
    }

    return 0;
}


















// int vowelTest(char n)
// {
//     int lowerVowel, upperVowel;
//     lowerVowel = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')

// }





// int main() {
//     char c;
//     printf ("Enter a letter: ");
//     scanf ("%c", &c);
//     printf ("Your letter is %c\n", vowelTest(c));
//     return 0;
// }