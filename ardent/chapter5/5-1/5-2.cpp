#include <iostream>
#include "cstring"
using namespace::std;

int main()
{
    struct
    {
        char Name [30];
        char MPhoneNum[20];
    } Friend;

    strcpy(Friend.Name , "김갑돌");
    strcpy(Friend.MPhoneNum , "010-2323-1323");

    cout<< Friend.Name << endl;
    cout<< Friend.MPhoneNum << endl;
    return 0;
}
