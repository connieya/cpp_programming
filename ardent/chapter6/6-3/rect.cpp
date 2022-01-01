#include "ch06_rect.h"

int RectArea(const int width, const int height)
{
    if (width <=0  || height <= 0)
        return 0;

    return width*height;
}

double TriangleArea(const int base , const int height)
{
    if (base <= 0 || height <= 0)
        return 0;

    return (base*height*0.5);
}