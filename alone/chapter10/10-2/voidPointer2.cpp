#include "stdio.h"

int main(void)
{
    int ar[] = {1,2,3,4,5};
    void *vp;
    vp = ar;
//    vp = vp+1; // 에러 발생 +1을 해도 몇 바이트 뒤로 이동할지 모른다.
    printf("%d\n",vp);
    printf("%d\n",*(int*)vp);
    vp = (int*)vp+1; //  정수형 포인터 캐스팅을 했기 때문에 그 뒤에 +1을 하면 4바이트씩 이동해야 한다는 것을 알게된다.
    printf("%d\n",*(int*)vp);
    printf("%d\n",&ar[0]);
}