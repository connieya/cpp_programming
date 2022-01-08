#include "stdio.h"

int main(void)
{
    int i;
    int *pi;
    int **ppi;

    i = 1234;
    pi = &i;
    ppi = &pi;
    printf("%d\n",**ppi); // i의 값
    printf("%d\n",*ppi); // i의 메모리 주소
    printf("%d\n",&ppi); // ppi의 메모리 주소
    printf("%d\n",*pi);  // pi가 가리키는 i의 값
    printf("%d\n",&pi); // pi의 메모리 주소
    printf("%d\n",&*ppi); // pi의 메모리 주소
    printf("%d\n",&i); // i의 메모리 주소
    printf("%d\n",pi); // i의 메모리 주소
}