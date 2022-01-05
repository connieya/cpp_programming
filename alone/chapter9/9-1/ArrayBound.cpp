#include "stdio.h"

int main(void)
{
    char name[10];
    printf("이름이 뭐니?");
    gets(name);
    printf("너가 바로 그 유명한 %s 이구나 \n", name);
}