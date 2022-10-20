#include "stdio.h"
#include "stdlib.h"

typedef int element;

typedef struct tagNode {
    element data;
    struct tagNode *nextNode;
} Node;

Node *createNode(element newData);

void destroyNode(Node *Node);

void appendNode(Node **head, Node *newNode);

void insertAfter(Node *current, Node *newNode);

void insertNewHead(Node **head, Node *newHead);

Node *getNodeAt(Node *head, int location);

int getNodeCount(Node *head);


Node *createNode(element newData) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = newData;
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
}

void insertAfter(Node *current, Node *newNode) {
    newNode->nextNode = current->nextNode;
    current->nextNode = newNode;

}

void insertNewHead(Node **head, Node *newHead) {
    if ((*head) == NULL) {
        (*head) = newHead;
        return;
    }
    newHead->nextNode = (*head);
    (*head) = newHead;
}

void removeNode(Node **head, Node *remove) {
    if (*head == remove) {
        *head = remove->nextNode;
        return;
    }
    Node *current = *head;
    while (current->nextNode != remove && current->nextNode) {
        current = current->nextNode;
    }
    current->nextNode = remove->nextNode;
}

Node *getNodeAt(Node *head, int location) {
    Node *target = head;
    while (target != NULL && (--location) >= 0) {
        target = target->nextNode;
    }
    return target;
}

int getNodeCount(Node *head) {
    int count = 0;
    Node *current = head;
    while (current) {
        current = current->nextNode;
        count++;
    }
    return count;
}


int main(void) {
    int i = 0;
    int count = 0;
    Node *List = NULL;
    Node *current = NULL;
    Node *newNode = NULL;

    for (i = 0; i < 5; i++) {
        newNode = createNode(i);
        appendNode(&List, newNode);
    }

    newNode = createNode(-1);
    insertNewHead(&List, newNode);

    newNode = createNode(-2);
    insertNewHead(&List, newNode);

    count = getNodeCount(List);
    for (i = 0; i < count; i++) {
        current = getNodeAt(List, i);
        printf("List[%d] : %d\n", i, current->data);
    }

    printf("\nInserting 3000.. after [2] ... \n\n");

    current = getNodeAt(List, 2);
    newNode = createNode(3000);
    insertAfter(current, newNode);

    count = getNodeCount(List);

    for (i = 0; i < count; i++) {
        current = getNodeAt(List, i);
        printf("List[%d] : %d\n", i, current->data);
    }
}