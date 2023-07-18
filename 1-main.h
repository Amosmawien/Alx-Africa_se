#include <stdio.h>

void main()
{
   char s[] = "another string";

   printf(" first element: %p\n", s);
   printf(" second element: %p\n", s + 1);
   printf(" third element: %p\n", s + 2);
}

