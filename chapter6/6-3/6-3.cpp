#include <iostream>

#define TEST
using namespace ::std;

int main(void) {
    cout << "***************************" << endl;

#ifdef TEST
    cout << " TEST" << endl;
#else
    cout << "*************************" << endl;
#endif
    return 0;
}
