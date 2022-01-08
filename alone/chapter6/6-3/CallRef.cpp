#include "stdio.h"

int plusone(int *a);

int main(void)
{
    int i,j;
    i = 5;
    j = plusone(&i); // i의 메모리 주소 값을 전달 , 포인터 변수가 아니면 메모리 주소 값을 받을 수 없다.
    printf("i = %d , j = %d",i,j);
}
// a는 a가 가리키는 번지 주소이다.
int plusone(int *a){
    *a = *a +1; // *a는 a가 가리키고 있는 번지의 값을 말한다.
    return *a;
}