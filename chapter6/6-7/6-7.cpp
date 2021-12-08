#include <iostream>
#include "string.h";
using namespace::std;

typedef struct
{
    char name[30];
    int age;
} PERSON;

int TEST1(PERSON p);

int main()
{
    PERSON a = {"pgh",28};

    cout << "main : " << a.name << endl;
    cout << "main : " << a.age << endl;

    TEST1(a); // 함수 호출

    cout << "*********************************" << endl;

    cout << "main :" << a.name << endl;
    cout << "main :" << a.age << endl;

    return 0;

}

int TEST1(PERSON p) {
    cout << "***********************" << endl;

    cout << "TEST1: " << p.name << endl;
    cout << "TEST1: " << p.age << endl;

    strcpy(p.name , "cony");
    p.age = 26;


    cout << "***********************" << endl;

    cout << "TEST1: " << p.name << endl;
    cout << "TEST1: " << p.age << endl;
    return 0;
}