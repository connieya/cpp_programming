#include <iostream>

using namespace ::std;

int main() {
    int score;
    bool flag = true;
    do {
        if (flag == 0){
            cout << "점수의 범위가 잘못 되었습니다. 다시 입력하세요 !!" << endl;
        }
        cout << "점수 입력 :";
        cin >> score;
        flag = false;
    } while (score > 100 || score < 0);
    cout << "당신이 입력한 점수는 " << score << "입니다." << endl;
}