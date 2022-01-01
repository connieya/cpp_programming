#include <iostream>
#include "config.h"
using namespace::std;

int main()
{
    SAM Friend;

    strcpy(Friend.Name , "김갑돌");
    strcpy(Friend.MPhoneNum , "010-8741-0233");

    SAM  Friend1;
    Friend1 = Friend;

    cout << Friend.Name << endl;
    cout << Friend.MPhoneNum << endl;

    cout << Friend1.Name << endl;
    cout << Friend1.MPhoneNum << endl;

    return 0;
}
