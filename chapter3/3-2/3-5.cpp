#include <iostream>
using namespace::std;

int main()
{
    int num;

    cout << "숫자 입력 :";
    cin >> num;

    switch (num) {
        case 1 :
            cout << "1이 입력 되었습니다." << endl;
            break;
        case 2:
            cout << "2이 입력 되었습니다." << endl;
            break;
        default:
            cout << "1또는 2가 아닌 값이 입력 되었습니다." << endl;
            break;
    }
    return 0;
}