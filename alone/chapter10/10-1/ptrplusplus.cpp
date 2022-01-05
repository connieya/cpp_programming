#include "stdio.h"

int main(void)
{
    int ar[] = {10,20,30,40,50};
    int *ptr;
    ptr = ar; // ar의 시작 번지 대입
    for (int j = 0; j < 5; ++j) {
//        printf("%d ",*ptr++); 10 ,20 ,30 ,40 ,50
        printf("%d ",(*ptr)++); //  10,11,12,13,14
        //위 두 문장의 차이점을 잘 이해하길
    }
}