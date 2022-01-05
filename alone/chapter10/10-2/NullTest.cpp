#include "stdio.h"
#include "cstring"
int main(void)
{
    char str[] = "korea";
    char *p;
    p = strchr(str,'r');
    puts(p); // rea
    printf("%d\n",p); // 6422296
    printf("%d\n",&str[2]); // 6422296;
    if (p != NULL) {
        *p = 's';
    }
    puts(str); // kosea
}