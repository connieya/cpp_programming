#include <iostream>
using namespace::std;

int TestFunc1(int a);
int TestFunc2(int &a);
int TestFunc3(int *a);

int main()
{
    int b = 200;
    int &r = b;
    cout << "b= " << b << endl;
    TestFunc1(b);
    cout << "b= " << b << endl;

    cout << "*******************************" << endl;
    TestFunc2(r);
    cout << "b= " << b << endl;
    cout << "*******************************" << endl;
    TestFunc3(&b);
    cout << "b= " << b << endl;
}

int TestFunc1(int a){
    cout << "a= " << a << endl;
    a = 100;
    cout << "a= " << a <<endl;
    return 0;
}

int TestFunc2(int &a)
{
    cout << "a= " << a << endl;
    a = 777;
    cout << "a= " << a << endl;
    return 0;
}

int TestFunc3(int * a){
    cout << "*a= " << *a << endl;
    *a = 999;
    cout << "*a =" << *a << endl;

    return 0;
}