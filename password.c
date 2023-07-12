#include <stdio.h>

int sum(int, int);
int product(int, int);
int subtract(int, int);

int main()
{
   int i = 0;
   int a = 10;
   int b = 5;
   int result = 0;
   int (*pfun[3])(int, int);

   pfun[0] = sum;
   pfun[1] = product;
   pfun[2] = subtract;

   for( i = 0 ; i < 3 ; i++)
   {
     result = pfun[i](a, b);
     printf("\nresult = %d", result);
   }

   result = pfun[1](pfun[0](a, b), pfun[2](a, b));
   printf("\n\nThe product of the sum and the subtract = %d\n",result);
}

int sum(int x, int y)
{
   return x + y;
}

int product(int x, int y)
{
   return x * y;
}

int subtract(int x, int y)
{
   return x - y;
}

