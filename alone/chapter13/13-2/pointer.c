#include "stdio.h"

int main(void)
{
    int arr[10] = {1,12,33,44,25,36,17,28,39,10};
    int *p = arr;
    printf("%d \n",*p);
    printf("%d \n",*(++p));
    printf("%d \n",*(++p));
    printf("%d \n",*(++p));
}