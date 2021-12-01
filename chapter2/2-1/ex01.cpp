#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "input integer : ";
    cin >> num1;

    cout << "input integer2 : ";
    cin >> num2;

    cout << num1 << "+" << num2 << " = " << num1+num2 << endl;
    cout << num1 << "-" << num2 << " = " << num1-num2 << endl;
    cout << num1 << "*" << num2 << " = " << num1*num2 << endl;
    cout << num1 << "/" << num2 << " = " << num1/num2 << endl;

    return 0;
}