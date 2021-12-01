#include <iostream>
using namespace std;

int main()
{
    int r;
    float CArea , Cference;

    cout << "input 반지름 :";
    cin >> r;
    CArea = 2*(float )3.14*r;
    Cference = r*r*(float )3.14;

    cout << "circle width : " << CArea << endl;
    cout << "circlr 면적 : " << Cference << endl;
    return 0;
}