#include <iostream>
#include "cstring"
using namespace::std;

int main()
{
    struct sam
    {
        char Name[30];
        char MPhoneNum[20];
    };

    typedef struct sam SAM;

    SAM Friend , Friend1;

    strcpy(Friend.Name , "김갑돌");
    strcpy(Friend.MPhoneNum , "010-8741-0000");

    Friend = Friend1;

    cout << Friend.Name <<  endl;
    cout << Friend.MPhoneNum <<  endl;

    cout << Friend1.Name <<  endl;
    cout << Friend1.MPhoneNum <<  endl;

    return 0;
}
