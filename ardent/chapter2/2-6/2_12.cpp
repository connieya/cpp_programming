#include <iostream>
using namespace::std;

int main()
{
    int a = 1234, b = 0x12345678;

    cout << hex << "16진수 a = " << a << dec << "\t\t10진수 a = " << a << endl;
    cout << hex << "16진수 b = " << b << dec << "\t\t10진수 b = " << b << endl;
    return 0;
}