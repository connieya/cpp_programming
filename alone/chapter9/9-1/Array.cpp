#include "stdio.h"

int main(void)
{
    int arScore[5];
    int i;
    int sum;
    for (i=0; i<sizeof (arScore) / sizeof (arScore[0]) ; i++) {
        printf("%d번 학생의 성적을 입렵하세요 : ",i+1);
        scanf("%d",&arScore[i]);
    }
    sum = 0;
    for (i=0; i< sizeof(arScore) / sizeof(arScore[0]); i++) {
        sum += arScore[i];
    }

    printf("\n 총점은 % d이고 평균은 %d점입니다. \n", sum , sum / (sizeof(arScore)/ sizeof(arScore[0])));
}