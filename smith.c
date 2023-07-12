
#include <stdio.h>

void main()
{
   char twoD[3][3] = { {'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}
                      };

   printf("address of twoD        : %p\n", twoD);
   printf("address of twoD[0][0]  : %p\n", &twoD[0][0]);
   printf("but what is in twoD[0] : %p\n", twoD[0]);
}
