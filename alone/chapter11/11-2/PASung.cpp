#include "stdio.h"
#include "malloc.h"
int main(void)
{
    int *ar[3];
    int num[3];

    for (int i = 0; i < 3; ++i) {
        scanf("%d",&num[i]); // 학습의 학생의 수
        ar[i] = (int *)( num[i]* sizeof(int)); // 학생의 수  만큼 동적 할당
    }
//    printf("%d\n",*(num+1)); // 시작 번지에서 1만큼 증가 한 뒤 거기에 해당하는 값을 참조해라

    for (int i = 0; i < 3; ++i) {
        free(ar[i]);
    }
}