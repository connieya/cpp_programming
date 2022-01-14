#include "bits/stdc++.h"

using namespace std;

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int key) {
    return key % 10;
}

void AddKey(int key) {
    int bucket;

    bucket = Hash(key);
    while (hashtable[bucket][0] != 0) { // 해당 버킷에 slot 이 꽉 차있다면 (이미 값이 있다면)
        bucket = (bucket + 1) % 10;
    }

    hashtable[bucket][0] = key;
}

bool FindKey(int key) {
    int bucket;
    bucket = Hash(key);
    while (hashtable[bucket][0] != 0) {
        if (hashtable[bucket][0] == key) return true;
        bucket = (bucket + 1) % 10;
    }
    return false;
}

int main() {
    int key;
    memset(hashtable, 0, sizeof(hashtable));
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << "번째 값을 입력하세요 : ";
        cin >> key;
        AddKey(key);
    }
    cout << "검색할 키를 입력하세요 : ";
    cin >> key;
    if (FindKey(key)) {
        puts("검색되었습니다.");
    } else {
        puts("입력하신 값은 없습니다.");
    }
}