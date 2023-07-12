#include <stdio.h>
#include <malloc.h>

main() {
    int  *base;
    int i,j;
    int cnt = 3;
    int sum = 0;


    base = (int *)malloc(cnt * sizeof(int));
    printf("the base of allocation is %16lu \n",base);

    if(!base)
        printf("unable to allocate size \n");
    else {
      for(j = 0;j < cnt; j++)
          *(base+j)=5;
    }
    for(j = 0;j < cnt; j++)
      sum = sum + *(base+j);

    printf("total sum is %d\n",sum);
    free(base);

    printf("the base of allocation is %16lu \n",base);

    base = (int *)malloc(cnt * sizeof(int));
    printf("the base of allocation is %16lu \n",base);
    free(base);

    base = (int *)calloc(10,2);
    printf("the base of allocation is %16lu \n",base);
    free(base);
}

