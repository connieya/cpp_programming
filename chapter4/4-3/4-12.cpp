#include <iostream>

using namespace ::std;

int main() {
    char ch = 'y', name[30] = "KabDol";

    cout << &ch << endl;
    cout << name << endl;
    cout << &name[0] << endl;

    cout << "********************************" << endl;

    cout << hex << (int) &ch << endl;
    cout << dec << (int) &ch << endl;
    cout << hex << (int) name << endl;
    cout << dec << (int) name << endl;
    cout << hex << (int) &name[0] << endl;
    cout << dec << (int) &name[0] << endl;
}