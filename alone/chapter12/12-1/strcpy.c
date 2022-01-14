#include "stdio.h"
#include "string.h"

int main(void)
{
    char str1[] = "parkgeonhee";
    char str2[] = "conypark";
    strcpy(str1 , str2);
    puts(str1); // conypark
    // 문자열 널 종료 까지 복사 되므로 나머지 뒤에 hee는 출력되지 않음

    char str3[] = "abcdefghi";
    char str4[] = "123456789";
    strncpy(str3, str4 ,3);
    puts(str3); // 123deghhi

    char str5[] = "abcd";
    char str6[] = "123456789";
    strncpy(str6 , str5 , 10);
    puts(str6);
}