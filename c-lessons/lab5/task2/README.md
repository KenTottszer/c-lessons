2. Indexing out of bounds
Try the following program, what output do you expect? What do you get, why?

This program has undefined behaviour.

Compiling and running on different platforms
and/or using a different C compiler
may change its behaviour.

#include <stdio.h>

int main(void) {
  double t[10];
  int a = 1, b = 2, c = 3;

  printf("a=%d\nb=%d\nc=%d\n", a, b, c);

  /* indexing out of bounds */
  t[-1] = 0.2;
  t[10] = 0.3;
  printf("\n");

  printf("a=%d\nb=%d\nc=%d\n", a, b, c);

  return 0;
}
Try the following program. What does while (true) mean?

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int array[10], i;

    for (i = 0; i < 10; i = i + 1)
        array[i] = i;
    i = 0;
    while (true) {
        printf("%dth element: %d\n", i, array[i]);
        i += 1;
    }

    return 0;
}
The second program contains an infinite loop: while (true). Theoretically this program would run forever but sooner or later it tries to access a memory location that is not dedicated to your program and then the operating system will stop it.

