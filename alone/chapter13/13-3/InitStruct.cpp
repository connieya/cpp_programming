#include "bits/stdc++.h"

using namespace std;

struct tag_Friend {
    char Name[10];
    int Age;
    double Height;
};

int main()
{
     tag_Friend Friends[10] = {
             {"김은철",30,178.2},
             {"이노성",42,169.8},
             {"이상엽",26,176.5}
     };

    printf("third person info  : name = %s , age = %d , height = %.1f \n", Friends[2].Name , Friends[2].Age , Friends[2].Height);


}