#include "stdio.h"
#include "string.h"


int main(void)
{
    struct tag_Friend {
        char Name[3];
        int Age;
        double Height;
    };
    struct tag_Friend ar[10];
    int n =20;
    for (int i = 0; i < 10; ++i) {
       ar[i].Age = n++;
        printf("%d \n" , ar[i].Age);
       ar[i].Height = 167.0+ (2*i);
        strcpy(ar[i].Name , "fggdgdg");
    }
    struct tag_Friend * br[10];
    for (int i = 0; i < 10; ++i) {
        br[i] = &ar[i];
    }
    for (int i = 0; i < 10; ++i) {
        printf("%s %d %g \n",br[i]->Name , br[i]->Age , br[i]->Height );
    }

}
