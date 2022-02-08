#include "bits/stdc++.h"

using namespace std;

struct Friend {
    char *pName;
    int Age;
    double Height;
};

int main()
{
    Friend Albert = {NULL , 80 , 165.0};
    Friend Kim;

    Albert.pName = (char *) malloc(32);
    strcpy(Albert.pName , "알버트 아인슈타인");
    Kim = Albert;
    printf("name = %s , age  = %d , height = %.1f\n" , Kim.pName , Kim.Age , Kim.Height);

    strcpy(Albert.pName , "아이작 뉴튼");
    printf("name = %s , age  = %d , height = %.1f\n" , Kim.pName , Kim.Age , Kim.Height);

}