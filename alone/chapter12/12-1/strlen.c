#include "stdio.h"
#include "string.h"

int main(void)
{
    char str1[10] ="abcd";
    int len = strlen(str1);
    printf("%d  \n",len); // 4

    char str2[10] = "박건희";
    len = strlen(str2);
    printf("%d \n",len); // 9

    char str3[10] = "코니";
    len = strlen(str3);
    printf("%d \n",len); // 6
}

