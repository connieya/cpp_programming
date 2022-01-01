#include "stdio.h"

void PrintCount();


int main(void)
{
    int i;
    for (i=0; i<5; i++) {
        PrintCount();
    }
//    count = 5;
//    printf("%d " , count);
}

void PrintCount() {
    static int count = 0 ; // 최초 호출 시 딱 한번 초기화 된다.
    count++;
    printf("저는 %d 번째로 호출 되었습니다.\n",count);
}