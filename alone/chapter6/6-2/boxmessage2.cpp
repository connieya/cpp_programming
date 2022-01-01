#include "bits/stdc++.h"

void BoxMessage(char *str);

void putchs(int ch, int n);

int main(void) {
    BoxMessage("함수가 또 함수를 또 부를 수 있다.");
    BoxMessage("함수는 반복을 제거하며 코드의 재사용성을 높인다.");
}

void BoxMessage(char *str) {
    int i;
    int len;

    len = strlen(str);
    puts("");
    putchs('-', len + 4);
    puts("");
    printf("| %s |\n", str);
    putchs('-', len + 4);
    puts("");
}

void putchs(int ch, int n) {
    int i;
    for (i = 0; i < n; i++) {
        putchar(ch);
    }
    puts("");
}