#include "bits/stdc++.h"

using namespace std;

string food[] = {"pasta", "ice cream" , "pizza" ,"potato"};

bool searchPizza(string data){
    for (int i = 0; i < 4; ++i) {
        if(data == "pizza") return true;
    }
    return false;
}

int main()
{
    cout << food[2] << '\n';
    cout << searchPizza("pizza");
}