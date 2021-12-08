#include <iostream>
#include "string.h"
using namespace::std;

typedef struct
{
    char name[30];
    int age;
} Person;

int Test2(Person *p);

int main()
{
    Person a = {"pgh", 21};

    cout << "main : " << a.name << endl;
    cout << "main : " << a.age << endl;

    Test2(&a); // 함수 호출

    cout << "*********************************" << endl;

    cout << "main :" << a.name << endl;
    cout << "main :" << a.age << endl;
}

int Test2(Person *p){
    cout << "*********************************" << endl;

    cout <<"Test 2 : " << p->name << endl;
    cout <<"Test 2 : " << p->age << endl;

    strcpy(p->name , "geonhee");
    p->age = 24;

    cout << "*********************************" << endl;
    cout <<"Test 2 : " << p->name << endl;
    cout <<"Test 2 : " << p->age << endl;

    return 0;

}