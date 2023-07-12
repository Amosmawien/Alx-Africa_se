#include <stdio.h>

int sum(int a, int b);

int main(void)
{
  int (*p) (int x, int y);
  int result;

  p = sum; /* get address of sum() */

  result = (*p) (10, 20);
  printf("%d", result);

  return 0;
}

int sum(int a, int b)
{
  return a+b;
}
