#include "stdio.h"

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define MAXSTAGE 3
#define putchxy(x,y,c){gotoxy(x,y); putch(c);}

void DrawScreen();
bool T