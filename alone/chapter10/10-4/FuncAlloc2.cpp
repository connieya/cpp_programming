#include "stdio.h"
#include "malloc.h"
#include "cstring"
void InputName(char *pName)
{
    pName = (char *) malloc(12);
    strcpy(pName, "Cabin");
}

int main(void)
{
    char *Name;
    InputName(Name);
    printf("이름은 %s입니다.\n",Name);
    free(Name);
}