#include "stdio.h"
#include "string.h"
struct tag_Friend
{
    char Name[10];
    int Age;
    double Height;
};

int main(void)
{
    struct tag_Friend Friend; // 태그로 부터 Friend 라는 이름의 구조체 변수 선언
    strcpy(Friend.Name , "cony");
    Friend.Age = 29;
    Friend.Height = 169.4;

    printf("name = %s , age = %d , height = %.1f\n ", Friend.Name , Friend.Age, Friend.Height);
}
