#include "stdio.h"
#include "malloc.h"
#include "stdbool.h"

typedef struct  {
    int value;
    struct Node *prev;
    struct Node *next;
}Node;

 Node *head;

// 연결 리스트 초기화 - 머리를 할당한다.

void InitList()
{
    head = (Node *) malloc(sizeof (Node));
    head -> prev = NULL;
    head -> next = NULL;
}

// 지정한 노드의 오른쪽에 삽입한다.
Node *InsertNodeRight(Node *Target, Node *aNode)
{
    Node *New;
    Node *Right;

    New = (Node *) malloc(sizeof(Node));
    *New = *aNode;
    Right = Target -> next;
    New -> next = Right;
    New -> prev = Target;
    Target -> next = New;
    if (Right) {
        Right-> prev = New;
    }
    return New;
}

// 지정한 노드의 왼쪽에 삽입한다.
Node *InsertNodeLeft(Node *Target , Node *aNode)
{
    Node *Left;
    Left = Target -> prev;
    if(Left) {
        return InsertNodeRight(Left,aNode);
    }
    return NULL;
}

// 제일 끝에 노드를 추가한다.
void AppendNode(Node *aNode)
{
    Node *tail;
    for(tail = head; tail->next; tail = tail -> next) {;}
    InsertNodeRight(tail,aNode);
}

// 단순 연결 리스트와는 달리 자기 자신을 지울 수 있다.
bool DeleteNode(Node *Target)
{
    Node *Left , *Right;

    // 헤더는 지울 수 없음
    if (Target == NULL || Target == head) {
        return false;
    }
    Left = Target -> prev;
    Right = Target -> next;

    Left->next = Right;
    if (Right) { // 타겟이 끝 노드일 경우
        Right->prev = Left;
    }
    free(Target);

    return true;
}

// idx 번째 노드를 찾는다.
Node *FindNodeByIndex(int idx)
{
    Node *Now;
    int index = 0;
    for(Now = head->next; Now; Now = Now->next) {
        if(index == idx) {
            return Now;
        }
        index++;
    }
    return NULL;
}

// 노드의 순서값을 구한다.
int GetNodeIndex(Node *Target) {
    Node *Now;
    int index = 0;
    for (Now = head->next; Now; Now = Now->next){
        if (Now = Target) {
            return index;
        }
        index++;
    }
    return -1;
}

// 노드의 개수를 구한다.
int GetListCount()
{
    Node *Now;
    int Count = 0;
    for (Now = head-> next; Now; Now = Now -> next) {
        Count++;
    }
    return Count;
}

// 연결 리스트의 모든 노드와 머리를 햐제한다.
void UnInitList()
{
    while (DeleteNode(head->next)) {;}
    free(head);
    head =NULL;
}

int main(void)
{
    Node *Now , Temp;
    InitList();

    for (int i = 1; i <= 5; ++i) {
        Temp.value = i;
        AppendNode(&Temp);
    }
    // 순회하면서 출력
    for (Now = head -> next; Now; Now = Now -> next) {
        printf("%d\t",Now -> value);
    }
    printf("\n");

    // 개수 , 데이터 3을 가진 노드와 앞 뒤 노드를 조사한다.
    printf("node count = %d\n",GetListCount());
    for (Now = head->next; Now; Now = Now->next) {
        if (Now->value == 3) break;
    }
    if (Now) {
        printf("Mid = %d , front Node = %d , back Node = %d \n", Now->value , Now->prev,Now->next);
    }
}