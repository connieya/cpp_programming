#include "bits/stdc++.h"

using namespace std;

struct tag_Friend {
    char Name[10];
    int Age;
    double Height;
};

tag_Friend GetFriend()
{
    tag_Friend f;
    strcpy(f.Name , "박건희");
    f.Age = 29;
    f.Height = 178.3;
    return f;
}
tag_Friend *GetFriend2()
{
    tag_Friend f;
    strcpy(f.Name , "박건희");
    f.Age = 29;
    f.Height = 178.3;
    return &f;
}


int main()
{
    tag_Friend f1 = GetFriend();
    printf("%d  \n", &f1);
    printf("%d  \n", f1.Age);
    tag_Friend *f2 = GetFriend2();

}