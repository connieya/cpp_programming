#include "stdio.h"

int main(void) {
    int *pi;
    char *pc;

    float *pf;
    double *pd;

    printf("정수형 포인터 크기 :  %d  \n", sizeof(pi));
    printf("문자형 포인터 크기 :  %d  \n", sizeof(pc));
    printf("실수형 포인터 크기 :  %d  \n", sizeof(pf));
    printf("배정도형 포인터 크기 :  %d  \n", sizeof(pd));
}