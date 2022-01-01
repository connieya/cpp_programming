#include <iostream>
using namespace::std;

int main()
{
    int b = 300;
    int *pb = &b;

    cout << b << endl;
    cout << pb << endl;

    b = 200;
    cout << *pb << endl;
    cout << &b << endl;
    cout << pb << endl;

    return 0;
}