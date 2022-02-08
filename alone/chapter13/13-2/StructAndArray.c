#include "stdio.h"

int main(void)
{
    struct tag_Friend {
        char Name[10];
        int Age;
        double Height;
    };

    struct tag_Circle {
        char Name[16];
        int MemNum;
        struct tag_Friend Member[50];
    };

    struct tag_Circle arCircle[10];
    struct tag_Circle *pCircle = arCircle;

    arCircle[4].Member[2].Age = 21;
    pCircle->Member[3].Age = 22;

}