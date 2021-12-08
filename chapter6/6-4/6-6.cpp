#include <iostream>

using namespace ::std;

int TestFunc1(int a);

int TestFunc4(int a = 888);

int main() {
    int b = 200;
    cout << "b= " << b << endl;
    TestFunc1(b);
    cout << "b= " << b << endl;

    TestFunc1(999);
    TestFunc1(b);

    cout << "**********************************" << endl;

    TestFunc4(999);
    TestFunc4(b);
    TestFunc4();
}

int TestFunc1(int a) {
    cout << "a=" << a << endl;
    a = 100;
    cout << "a= " << a << endl;

    return 0;
}

int TestFunc4(int a) {
    cout << "a= " << a << endl;
    a = 100;
    cout << "a= " << a << endl;

    return 0;
}