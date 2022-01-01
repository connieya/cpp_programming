#include <iostream>
#include <string.h>
using namespace::std;


using namespace::std;

int main()
{
    char s_string[100] = "C++ programming is very interesting!!!";
    char d_string[100];

    cout << "s_string  = " << s_string << endl;

    strcpy(d_string , s_string);
    cout << "d_string  = " << d_string << endl;

}