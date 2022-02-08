#include "random"
#include "stdio.h"
#include "stdlib.h"
using namespace std;

struct tag_Munje {
    char *Question;
    char *Case[3];
    int Answer;
    bool Used;
};

struct tag_Munje Munje[] = {
        {"다음 타입 중 기본형이 아닌 것은 ?","정수형","배열","문자형",2,false},
        {"다음 중 반복문이 아닌 것은? ","switch","for","while",1,false},
        {"구조체를 선언할 때 사용하는 키워드 ","int","goto","struct",3,false},
        {"다음 중 가장 크기가 큰 타입은 ?" ,"int","double","char",2 , false},
        {"열거형을 선언할 때 사용하는 키워드느 ? ","enum","alias","define",1, false},
        {"다음 중 단항 연산자는? ","++","?","=" ,1 ,false},
        {"문자 배열의 내용을 바꿀 때 사용하는 함수는? ","strassign","strmove","strcpy",3,false}
};

int main()
{
    for (int i = 0; i < 5; ++i) {
    }
}