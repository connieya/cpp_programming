#include "stdio.h"

int main(void)
{
    char arps[5][9] = {"고양이" ,"개" , "오랑우탄" , "돼지", "지렁이"};
    char (*ps)[9];

    ps = arps;
    for (int i = 0; i < 5; ++i) {
        printf("%s\n",ps++);
    }
}