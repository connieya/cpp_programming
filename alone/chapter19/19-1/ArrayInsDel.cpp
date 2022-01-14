#include "stdio.h"
#include "cstring"


char ar[16] = "abcdef";

using namespace std;

void Insert(int , char);
void Delete(int);
void Append(char ch);

int main(void)
{
    printf("최초 : %s\n" ,ar);
    Insert(3,'t');
    printf("t 삽입 : %s\n" ,ar);
    Delete(1);
    printf("b 삭제 : %s\n", ar);
    Append('s');
    printf("s 추가 : %s\n",ar);
}

void Insert(int idx , char ch) {
    memmove(ar+idx+1, ar+idx, strlen(ar)-idx+1);
    ar[idx] = ch;
}

void Delete(int idx) {
    memmove(ar+idx , ar+idx+1, strlen(ar)-idx);
}

void Append(char ch) {
    Insert(strlen(ar),ch);
}