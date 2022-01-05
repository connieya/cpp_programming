#include "stdio.h"
#include "math.h"

#define banollim(x,dig)(floor((x)*pow(10.0,dig)+0.5)/pow(10.0,dig))

int main(void)
{
    double  x= 123.456789;
    int i;
    for (i= -2 ; i<5; i++){
        printf("%f의 %d 자리 반올림  = %f\n",x,i,banollim(x,i));
    }
}