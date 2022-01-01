#include <iostream>
using namespace::std;

typedef struct
{
    char Name[30];
    char MPhoneNum[20];
} SAM;
// 멤버의 크기 50 바이트

int main()
{
    SAM arr[5] =
            {
                "김갑돌" , "010-1232-1323",
                "이치수" , "010-2313-3313",
                "정대호" , "010-2313-2331",
                "한치욱" , "010-1234-2300",
                "박사랑" , "010-3345-1231"
            };
    cout << "기본 크기 : " << sizeof(SAM) << endl; // 50

    for (int i = 0; i < 5; ++i) {
        cout << "arr["<<i<<"] 의 주소 :" << &arr[i] << endl; // 배열의 시작 위치가 50씩 증가한다.
    }

}