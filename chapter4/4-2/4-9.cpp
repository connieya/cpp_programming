#include <iostream>
using namespace::std;

int main()
{
 int score[4] = {0,}; // cpp 에서는 무조건 초기화 해야함
    for (int i = 0; i < 3; ++i) {
        cout <<"점수 "<< i+1 << "입력 : " << endl;
        cin >> score[i];
        score[3] = score[3] + score[i];
    }

    for (int i = 0; i < 4; ++i) {
        cout << score[i] << "    ";
    }
    cout << endl;
    return 0;
}