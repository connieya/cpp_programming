#include "stdio.h"
#include "string.h"

struct tag_Friend {
    char Name[10];
    int Age;
    double Height;
};

int main(void)
{
    struct tag_Friend Friend;
    struct tag_Friend *pFriend;
    pFriend = &Friend;
    strcpy(pFriend -> Name , "cony");
    pFriend -> Age = 30;
    pFriend -> Height = 178.3;

    printf("name = %s , age =  %d , height = %.1f\n" , pFriend->Name , pFriend->Age , pFriend->Height);
}