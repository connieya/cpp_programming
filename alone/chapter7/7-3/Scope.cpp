#include "stdio.h"

void func();
int i = 3;

int main(void)
{
    printf("i = %d\n",i);
    func();
}

void func()
{
    int i = 5;
    printf("i = %d\n",i);
    printf("global i = %d\n",::-i);
}