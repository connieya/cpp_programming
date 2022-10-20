#include "stdio.h"
#include "stdlib.h"

typedef int element;

typedef struct tagNode {
    element data;
    struct tagNode *prevNode;
    struct tagNode *nextNode;
} Node;

Node *createNode(element newData);
void destroyNode(Node *Node);
void appendNode(Node **head, Node *newNode);
void insertAfter(Node *current, Node *newNode);
void removeNode(Node **head, Node *remove);
Node *getNodeAt(Node *head, int location);
int getNodeCount(Node *head);

Node *createNode(element newData) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = newData;
    newNode->prevNode = NULL;
    newNode->nextNode = NULL;
    return newNode;
}

void destroyNode(Node *node) {
    free(node);
}

void appendNode(Node **head, Node *newNode) {
    if ((*head) == NULL) {
        *head = newNode;
        return;
    }
    Node *tail = (*head);
    while (tail->nextNode) {
        tail = tail->nextNode;
    }
    tail->nextNode = newNode;
    newNode->prevNode = tail;
}

void insertAfter(Node *current, Node *newNode) {
    newNode->nextNode = current->nextNode;
    newNode->prevNode = current;
    if (current->nextNode) {
        current->nextNode->prevNode = newNode;
    }
    current->nextNode = newNode;
}

void removeNode(Node **head, Node *remove) {
    if (*head == remove) {
        *head = remove->nextNode;
        if ((*head) != NULL) {
            (*head)->prevNode = NULL;
        }
        remove->prevNode = NULL;
        remove->nextNode = NULL;
        return;
    }
    Node * temp =remove;
    if(remove->prevNode != NULL){
        remove->prevNode->nextNode = temp->nextNode;
    }
    if(remove->nextNode != NULL){
        remove->nextNode->prevNode = temp->prevNode;
    }
    remove->prevNode = NULL;
    remove->nextNode = NULL;
}

Node * getNodeAt(Node * head , int Location) {
    Node * current = head;
    while (current != NULL && (--Location) >= 0){
        current = current->nextNode;
    }
    return current;
}

int getNodeCount(Node * head) {
    unsigned int count = 0;
    Node * current = head;
    while (current != NULL){
        current = current->nextNode;
        count++;
    }
    return count;
}

int main(void)
{
    int i=0;
    int count = 0;
    Node * List = NULL;
    Node * newNode = NULL;
    Node * current = NULL;

    for(i=0; i<5; i++) {
        newNode = createNode(i);
        appendNode(&List , newNode);
    }

    count = getNodeCount(List);
    for(i=0; i<count; i++){
        current = getNodeAt(List,i);
        printf("List[%d] : %d\n" ,i,current->data);
    }

    printf("\nInserting 3000 after [2] ... \n\n");

    current = getNodeAt(List,2);
    newNode = createNode(3000);
    insertAfter(current,newNode);

    for(i=0; i<count; i++){
        current = getNodeAt(List,i);
        printf("List[%d] : %d\n" ,i,current->data);
    }

    printf("\nDestroying List ... \n");
    count = getNodeCount(List);
    for(i=0; i<count; i++){
        current = getNodeAt(List,0);
        if(current){
            removeNode(&List,current);
            destroyNode(current);
        }
    }
}