#include "bits/stdc++.h"

using namespace std;

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int key) {
    return key % 10;
}

int Hash2(int key) {
    return (key / 10 + key % 10) % 10;
}

void AddKey(int key) {
    int bucket;

    bucket = Hash(key);
    if (hashtable[bucket][0] != 0) { // 이미 다른 값이 있음 (충돌이 발생했다면 ? )
        bucket = Hash2(key);
    }
    if (hashtable[bucket][0] == 0) {
        hashtable[bucket][0] = key;
    }
}

bool FindKey(int key) {
    int bucket;
    bucket = Hash(key);
    if (hashtable[bucket][0] == key) return true;

    bucket = Hash2(key);
    if (hashtable[bucket][0] == key) return true;
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