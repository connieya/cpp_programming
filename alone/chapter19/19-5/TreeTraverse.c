#include <windef.h>
#include "stdio.h"
#include "malloc.h"




typedef struct Node
{
    int data;
    struct Node *left;
    struct Node * right;
}Node;

Node * Root;

void iniTree(int data)
{
    Root = (Node *) malloc(sizeof(Node));
    Root->data = data;
}

Node * AddChild(Node * Parent, int data , BOOL bLeft)
{
        Node *New;

        New = (Node *) malloc(sizeof(Node));
        New->data =data;
        New->left = NULL;
        New->right = NULL;
    if (bLeft) {
        Parent->left =New;
    }else {
        (*Parent).right =New;
    }

    return New;
}

void PreOrder(Node * R)
{
    printf("%d ",R->data);
    if (R->left) PreOrder(R->left);
    if (R->right) PreOrder(R->right);
}

void InOrder(Node * R)
{
    if (R->left) InOrder(R->left);
    printf("%d ",R->data);
    if (R->right) InOrder(R->right);
}

void PostOrder(Node * R)
{
    if (R->left) PostOrder(R->left);
    if (R->right) PostOrder(R->right);
    printf("%d ",R->data);
}

void FreeTree(Node *R)
{
    if (R->left) FreeTree(R->left);
    if (R->right) FreeTree(R->right);
    free(R);
}

int main(void)
{
    Node *Left , *Right;
    iniTree(1);
    Left = AddChild(Root,2,TRUE);
    Right = AddChild(Root,3,FALSE);
    AddChild(Left,4,TRUE);
    AddChild(Left,5,FALSE);
    AddChild(Right,6,TRUE);

    PreOrder(Root);
    puts("");
    InOrder(Root);
    puts("");
    PostOrder(Root);
    puts("");

    FreeTree(Root);

}