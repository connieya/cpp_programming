#include <iostream>
using namespace::std;

int main()
{
    bool  a = true;
    cout << "a =" << a << endl;
    a = false;
    cout << "a =" << a << endl;
    a = -98; // 0 이 아닌 모든 수는 참으로 간주한다.
    cout << "a =" << a << endl;
    a =0;
    cout << "a =" << a << endl;
    return 0;
}