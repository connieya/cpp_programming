#include "bits/stdc++.h"

void plusref2(int &a);

 int main()
{
    int i;
    i =5;
    plusref2(i);
    printf("결과 = %d\n",i);
}

void plusref2(int &a)
{
     a = a+1;
}