#include "bits/stdc++.h"

void BoxMessage(char *str);

int main()
{
    BoxMessage("box and inside print string");
    BoxMessage("전달된 문자열의 길이에 적당한 박스를 스스로 계산한다.");
}

void BoxMessage(char *str)
{
     int i;
     int len;

     len = strlen(str);
    puts("");
    for (i = 0; i < len+4; ++i) {
        putchar('-');
    }
    puts("");
    printf("| %s |\n",str);
    for (i = 0; i < len+4; ++i) {
        putchar('-');
    }
    puts("");
}