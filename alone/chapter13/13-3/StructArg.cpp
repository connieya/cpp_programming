#include "bits/stdc++.h"

using namespace std;

struct tag_Friend {
    char Name[10];
    int Age;
    double Height;
};

void OutFriend(tag_Friend f)
{
    printf("name = %s , age = %d , height = %.1f\n " , f.Name , f.Age , f.Height);
}

void OutFriend2(tag_Friend *f) {
    printf("name = %s , age = %d , height = %.1f\n " , f->Name, f->Age , f->Height);
}
int main()
{
    tag_Friend Friend = {"박건희",29,183.3};
    OutFriend(Friend);
    OutFriend2(&Friend);
}