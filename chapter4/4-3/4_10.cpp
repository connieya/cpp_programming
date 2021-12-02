#include <iostream>
using namespace::std;

int main()
{
    char string[30] = "computer";

    cout << string << endl;

    for (int i = 0; string[i] != '\0'; ++i) {
        cout << string[i];
    }
    cout << endl;

    for (int i = 0; i < 30; ++i) {
        cout << string[i];
    }
    cout << endl;
    return 0;
}