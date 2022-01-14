#include "stdio.h"

int main(void)
{
    char *arps[] = {"고양이","개","오랑우탄","돼지","지렁이"};
    for (int i = 0; i < 5; ++i) {
        printf("%s\n",arps[i]);
    }
}