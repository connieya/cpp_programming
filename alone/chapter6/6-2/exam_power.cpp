#include "stdio.h"

int power(int, int);

int main(void) {
    printf("%d\n", power(2,10));
}

int power(int a, int b) {
    int c= 1;
    while (b--){
        c *= a;
    }
    return c;
}