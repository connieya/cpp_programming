#include "stdio.h"

void arDump(void *array, int length);

int main(void) {
    unsigned char ari[2][3] = {{1, 2, 3},
                               {4, 5, 6}};
    printf("%d \n" , sizeof(ari));
    arDump(ari , sizeof(ari));
    arDump(ari[0] , sizeof(ari[0]));
    arDump(ari[1] , sizeof(ari[1]));
}

void arDump(void *array, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%02X ",*((unsigned char *)array+i));
    }
    printf("\n");
}