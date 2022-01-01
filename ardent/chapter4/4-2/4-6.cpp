#include <iostream>

using namespace ::std;

int main() {
    int weight[5] = {68, 54, 45, 87, 96};
    int s[5] = {0,};
    int a[5] = {5, 4};
    int i = 0;

    for (i = 0; i < 5; ++i) {
        cout << "weight[" << i << "] : " << weight[i] << endl;
    }
    cout << "**************************************" << endl;

    for (i = 0; i < 5; ++i) {
        cout << "s[" << i << "] :" << s[i] << endl;
    }
    cout << "**************************************" << endl;

    for (i = 0; i < 5; ++i) {
        cout << "a[" << i << "] :" << a[i] << endl;
    }
    cout << "**************************************" << endl;


    // java 에서는 초기화 하지 않으면 배열 인덱스 값에 0이 초기화 된다.
    int arr[3]; // cpp 에서는 값을 초기화 하지 않으면 쓰레기 값이 저장된다.
    for (int j = 0; j < 3; ++j) {
        cout << "arr[" << j << "] :" << arr[j] << endl;
    }
    cout << "arr[" << 4 << "] :" << arr[4] << endl;
    cout << "arr[" << 5 << "] :" << arr[5] << endl;

    return 0;
}