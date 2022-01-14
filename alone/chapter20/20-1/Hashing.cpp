#include "bits/stdc++.h"

#define BK 10
#define SL 1

using namespace std;

int hashtable[BK][SL];

int Hash(int key)
{
    return key % 10;
}

void AddKey(int key)
{
    int bucket;

    bucket = Hash(key);
//    cout << "버킷 번호 :" << bucket<< '\n';
    if (hashtable[bucket][0] == 0) {
        hashtable[bucket][0] = key;
    }
}

bool FindKey(int key) {
    int bucket;

    bucket = Hash(key);
    return (hashtable[bucket][0] == key);
}

int main()
{
    int key;
    memset(hashtable,0, sizeof(hashtable));
    for (int i = 0; i < 5; ++i) {
        cout << i+1 << "번째 값을 입력하세요 : ";
        cin >> key;
        AddKey(key);
    }
    cout << "검색할 키를 입력하세요 : ";
    cin >> key;
    if (FindKey(key)){
        puts("검색되었습니다.");
    }else {
        puts("입력하신 값은 없습니다.");

    }
}