#include "bits/stdc++.h"

int main()
{
    struct Node {
        int a;
        double b;
        char c[16];
        Node *prev;
        Node *next;
    };
    Node A,B;

    printf("a의 오프셋 = %d \n" , offsetof(Node,a));
    printf("b의 오프셋 = %d \n" , offsetof(Node,b));
    printf("c의 오프셋 = %d \n" , offsetof(Node,c));
    printf("prev 의 오프셋 = %d \n" , offsetof(Node,prev));
    printf("next 의 오프셋 = %d \n" , offsetof(Node,next ));
}