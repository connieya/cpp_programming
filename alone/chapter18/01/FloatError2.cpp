#include "bits/stdc++.h"

int main()
{
    double d = 123.456;
    int * pi = (int *) &d;
    printf("%d\n",*pi);
}