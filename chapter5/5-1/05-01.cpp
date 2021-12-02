#include <iostream>
#include <cstring>
using namespace::std;

int main()
{
    char Name[30] = "";
    char MphoneNum[20] = "";

    strcpy(Name , "김갑돌");
    strcpy(MphoneNum , "010-8741-0000");

    cout << Name << endl;
    cout << MphoneNum << endl;
    return 0;
}