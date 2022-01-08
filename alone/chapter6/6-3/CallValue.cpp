#include "stdio.h"

int plusone(int a);

int main(void)
{
    int i,j;

    i = 5;
    j = plusone(i);
    printf("i=%d , 결과 = %d\n",i,j);
}

int plusone(int a){
    a += 1;
    return a;
}