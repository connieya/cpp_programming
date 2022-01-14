#include "stdio.h"
#include "malloc.h"
#include "string.h"

#define ELETYPE int
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

void DumpArray(char *sMark)
{
    unsigned i;
    printf("%16s => size = %02d , count = %02d : ",sMark, size,num);
    for(i = 0; i< num; i++) {
        printf("%2d ", ar[i]);
    }
    printf("\n");
}

int main(void)
{
    initArray(10,5);
    DumpArray("first init");
    for (int i = 1; i <= 8; ++i) {
        Append(i);
    }
    DumpArray("add 8 elements");
    Insert(3,10);
    DumpArray("insert value : 10");
    Insert(3,11);
    DumpArray("insert value : 11");
    Insert(3,12);
    DumpArray("insert value : 12");
    Delete(7);
    DumpArray("delete idx 7");

    UnInitArray();

}