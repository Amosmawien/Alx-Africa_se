 
#include <stdio.h>

int *f(int x);
int count;

int main(void)
{
  int *p;

  p = f(110); /* return pointer */

  printf("count (through p) is %d", *p);

  return 0;
}

int *f(int x)
{
  count = x;

  return &count; /* return a pointer */
}
