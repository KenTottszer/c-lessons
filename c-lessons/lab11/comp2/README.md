File Handling: read, count and write

Write a C program that reads a text file named "input.txt" and counts the number of lines, words, and characters in the file. The program should then write these counts to a new text file named "output.txt".

You can create a text file by copy this to notepad and save:
Hello, this is a sample text file.
It contains multiple lines and words.

Hint: fopen() opens the file, there are two arguments needed, the path (where it is, or in the same directory as your program just the filename) and the mode that can be "r"-read "w"-write "a"-append (for text based files we use these). You should know "rb","wb" are for binary files, these are not portable!
fopen will create a FILE*, a pointer points to the file itself. If returns with NULL the open did not succeed.
Other functions are related to the standard IO functions:
fgetc(FILE*)->getchar() (reads a character)
fscanf(File*,...)->scanf()
fprintf(File*,)->printf()
Before you terminate your program you should use fclose(FILE*)!
There is a special character, EOF (end-of-file), that is like '\0' in strings.