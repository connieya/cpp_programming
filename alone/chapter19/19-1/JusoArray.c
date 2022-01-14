#include "stdio.h"
#include "malloc.h"

struct tag_NameCard
{
    char name[10];
    char tel[15];
    char addr[32];
};
#define ELETYPE tag_NameCard
ELETYPE *ar;
unsigned size;
unsigned num;
unsigned growby;

void initArray(unsigned asize , unsigned agrowby)
{
    size = asize;
    growby = agrowby; // 배열의 증가 사이즈
    num = 0;
    ar = (ELETYPE *)malloc(size * sizeof(ELETYPE));
}

void Insert(int idx , ELETYPE value)
{
    unsigned need;

    need = num+1;
    if (need > size) {
        size = need + growby;
        ar = (ELETYPE *) realloc(ar,size* sizeof(ELETYPE));
    }
    memmove(ar+idx+1,ar+idx , (num-idx)* sizeof(ELETYPE));
    ar[idx] = value;
    num++;
}

void Delete(int idx)
{
    memmove(ar+idx,ar+idx+1 , (num-idx-1)* sizeof(ELETYPE));
    num--;
}

void Append(ELETYPE value)
{
    Insert(num , value);
}

void UnInitArray()
{
    free(ar);
}

int main(void)
{
    char ch;
    unsigned i;
    struct tag_NameCard Temp;
    initArray(10,5);
    for (;;) {
        printf("input   : (1. show | 2. add | 3. delete | Q. quit");
        ch = getchar();
        printf("\n");
        if (ch == 'Q' || ch == 'q'){
            break;
        }

        switch (ch) {
            case '1':
                if (num == 0)
                {
                    printf("there is not comment \n" );
                } else {
                    for (i =0; i<num; i++){
                        printf("%d , 이름 : %s , 전화 : %s , 주소 : %s\n",i,ar[i].name , ar[i].tel , ar[i].addr );
                    }
                }

        }
    }
}