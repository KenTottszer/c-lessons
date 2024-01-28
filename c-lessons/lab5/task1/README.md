What does the following program do? How does it work? How to exit from it, what does end of file mean? Why does variable letter appear twice in printf()? The scanf("%c", &letter) == 1 expression has two effects, what are these?

#include <stdio.h>

int main(void) {
    char letter;
    while (scanf("%c", &letter) == 1) {
        printf("letter='%c', letter=%d\n", letter, letter);
    }

    return 0;
}

Note, that the program will print the output when you hit Enter after typing a line of text. This does not mean that scanf() is not reading the input by single characters. The line buffered input is the feature of the console window of the operating system and lets the user edit mistyped input before the program receives it.

Hint:The program keeps reading characters until the user sends an end of file signal. Under Windows pressing F6Enter or Ctrl+ZEnter on a new line, under Linux Ctrl+d will send end of file.