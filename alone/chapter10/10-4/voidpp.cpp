#include "stdio.h"

int main(void)
{
    void *vp;
    void *av[5];
    void **vpp;
    int i,*pi = &i;
    vpp = &vp;
    vpp = av;
    vpp++;
    vpp = &pi; // 불가능
    **vpp; // 불가능
}