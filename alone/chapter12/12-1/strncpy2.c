#include "stdio.h"
#include "string.h"

int main(void)
{
    char str[] = "cony is genius";
    strncpy(str+8,"hero" , 5);
    puts(str); // cony is hero
}