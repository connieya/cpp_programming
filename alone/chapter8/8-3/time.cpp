#include "stdio.h"
#include "time.h"

int main(void)
{
    time_t t;
    time(&t);
    printf("현재 시간은 %s입니다. \n", ctime(&t ));
}