#include <iostream>

using namespace ::std;

int main() {
    int score[3] = {99, 88, 100};

    cout << "score[0] 의 주소 :" << &score[0] << endl;
    cout << "score[1] 의 주소 : " << &score[1] << endl;
    cout << "score[2] 의 주소 : " << &score[2] << endl;

    cout << "************************************" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "score[" << i << "] 의 주소 :" << &score[i] << endl;
    }
    cout << "************************************" << endl;

    cout << "score[0] 의 주소 : " << score << endl;
    cout << "score[1] 의 주소 : " << score+1 << endl;
    cout << "score[2] 의 주소 : " << score+2 << endl;

    cout << "************************************" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "score[" << i << "] 의 주소 :" << score+i << endl;
    }
    return 0;
}