#include "stdio.h"

void func();

int main(void)
{
    extern int value;

    printf("value is %d\n",value);
    func()
}

void func()
{
    printf("Here is func , value = %d\n",value);
}