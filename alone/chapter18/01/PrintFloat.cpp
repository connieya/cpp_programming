#include "bits/stdc++.h"

void printFloat(float f) {
    unsigned t;
    char temp[35];
    char bin[35];

    // 비트를 다루기 쉽도록 정수형 변수에 대입한다.
    t = *(unsigned *) &f;

    // 선행 제로를 포함한 32자리의 2진수 문자열로 반환
    itoa(t, bin, 2);
    memset(temp, '0', 35);
    strcpy(temp + 32 - strlen(bin), bin);

    // 부호, 지수 다음에 공백을 하나씩 넣음
    bin[0] = temp[0];
    bin[1] = ' ';
    strncpy(bin + 2, temp + 1, 8);
    bin[10] = ' ';
    strcpy(bin + 11, temp + 9);

    printf(" 실수  = %f(%s). ", f, bin);

    // 지수 출력
    printf("지수부 = %d\n", (t >> 23 & 0xff) - 127);

}

int main() {
    printFloat(0.375f);
    printFloat(3.14f);
    printFloat(-0.5f);
    printFloat(0.1f);
}
