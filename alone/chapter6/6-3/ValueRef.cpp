#include "stdio.h"

int main(void)
{
    int i, icopy;
    int *pi;

    i=5;
    icopy =i;
    icopy = icopy +1;
    printf("i = %d , icopy = %d \n",i,icopy); // i =5 , icopy = 6

    i =  5;
    pi = &i;

    *pi = *pi+1;
    printf("i = %d , *pi = %d",i,*pi); // i = 6 , *pi = 6
}