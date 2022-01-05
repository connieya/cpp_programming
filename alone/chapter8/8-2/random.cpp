#include "stdio.h"
#include "random"

int main(void)
{
    int i;
    for (i= 0; i<10; i++){
        printf("%d ",rand());
    }
}