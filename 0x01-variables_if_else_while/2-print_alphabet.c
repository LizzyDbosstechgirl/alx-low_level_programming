#include <stdio.h>
#include <stdlib.h>

int main()
    {
   char lower = 'a';
   char upper = 'A';

   while (lower <= 'z'){
    putchar(lower);
    ++lower;
   }

   while (upper <= 'Z'){
    putchar(upper);
    ++upper;
   }

   putchar('\n');

    return 0;
}
Task 3
