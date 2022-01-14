#include "bits/stdc++.h"

#define BK 10
#define SL 3

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
    for (int i = 0; i < SL; ++i) {
        if(hashtable[bucket][i] == 0) {
            hashtable[bucket][i] = key;
            break;
        }
    }
}

bool FindKey(int key) {
    int bucket;

    bucket = Hash(key);
    for (int i = 0; i < SL; ++i) {
        if(hashtable[bucket][i] == key){
            return true;
        }
    }
    return false;
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