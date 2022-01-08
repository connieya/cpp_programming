#include "stdio.h"

int main(void)
{
    char ar[] = "한국을 빛낸 사람들";
    char ars[2][3][10] = {
            {"이순신","강감찬","김유신"},
            {"유관순","을지문덕","신사임당"}
    };
    printf("ar 배열 = %s\n",ar);
    printf("ars[1][1] = %s \n",ars[1][1]);
}