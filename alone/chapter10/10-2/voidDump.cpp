#include "stdio.h"

void arDump(void *array , int length);

int main(void)
{
    int ari[] = {1,2,3,4,5};
    char arc[] = "Pointer";

    arDump(ari, sizeof(ari));
    arDump(arc, sizeof(arc));
}

void arDump(void *array , int length) {
    int i;
    for (i=0; i<length; i++) {
        printf("%02X ",*((unsigned char *)array+i));
    }
    printf("\n");
}