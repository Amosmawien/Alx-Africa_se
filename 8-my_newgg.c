#include <stdio.h>
#include <stdlib.h>

typedef int* ptr;
 
int main()
{
    ptr var;
    *var = 20;
 
    printf("Value of var is %d", *var);
    return 0;
}
