#include "stdio.h"
int main(void)
{
    int ar[5] = {11,32,43,54,25};

    printf("ar[2] =%d\n",ar[2]); // 43
    printf("ar[2] =%d\n",*(ar+2)); // 43 0번 인덱스에 2칸 떨어진 3번 인덱스의 값을 가져와라
    printf("ar[2] =%d\n",2[ar]); // 43
    printf("ar[2] =%d\n",*ar+2); // 13  0번 인덱스에 있는 값에 2를 더해라

    int n = 6;
    int *pi = &n;
    printf("pi의 값은 = %d\n",pi); // 6422276
    printf("pi+2의 값은 = %d\n",pi+2); // 6422284
}