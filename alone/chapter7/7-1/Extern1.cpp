#include "stdio.h"

int before = 11;

int main(void)
{
    extern int before;
    extern int after;

    printf("before  = %d , after = %d \n",before,after);

}

int after = 22;