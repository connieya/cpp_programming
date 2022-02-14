#include "bits/stdc++.h"

int main()
{
    int i = 0x12345678;
    char * p = (char *)&i;

    // 빅 엔디안
    for (int j = 0; j < sizeof(int); ++j) {
        printf("%x ",p[j]); // 78 56 34 12
    }

    putchar('\n');

    // 리틀 엔디안
    for (int j = sizeof(int)-1; j >= 0 ; --j) {
        printf("%x ",p[j]); // 12 34 56 78
    }

    putchar('\n');
}