#include <iostream>

using namespace ::std;

namespace NS_1 {
    int a = 200;
}

int main() {
    int a = 100;

    cout << "main () 범위입니다." << endl;

    for (int i = 0; i < 3; ++i) {
        cout << "반복문 for의 범위입니다. " << endl;
        cout << "i= " << i << endl;
        cout << "namespace NS_1의 a = " << NS_1::a << endl;
        cout << "a =" << a << endl;
    }

    cout << "namespace NS_1의 a= " << NS_1::a << endl;
    cout << "a= " << a << endl;
    cout << "프로그램을 종료합니다." << endl;

    return 0;
}