#include "stdio.h"

int main(void)
{
    int i = 1234;
    void *vp;

    vp = &i;
    printf("%d\n",vp);
//    printf("%d\n",*vp); // 'void*' is not a pointer-to-object type
    printf("%d\n",*(int *)vp); // (int *)  <-  정수형 포인터로 바꾸는 작업 ,
    // 그리고 제일 앞에 *  <- 포인터가 가리키는 번지에 들어있는 값을 참조
}