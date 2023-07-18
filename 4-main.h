#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double average(double data[], int count)
{
  int i = 0;
  double sum = 0.0;
  for( i = 0 ; i<count ; sum += data[i++])
    ;
  return sum/count;
}

int main()
{
   double data[3];
   data[0] = 1;
   data[1] = 2;
   data[2] = 3;

   printf("\nThe  average of thew values you entered is %10.2lf\n", average(data, 3));
   free(data);
}
