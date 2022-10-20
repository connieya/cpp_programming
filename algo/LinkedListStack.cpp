#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct tagNode
{
    char * data;
    struct tagNode * nextNode;
} Node;

typedef struct tagLinkedListStack
{
    Node * List;
    Node * top;
} LinkedListStack;

void createStack(LinkedListStack ** stack);
void destroyStack(LinkedListStack* stack);
Node * createNode(char * data);
void destroyNode(Node * node);
void push(LinkedListStack * stack , Node * newNode);
Node * pop(LinkedListStack * stack);
Node * top(LinkedListStack * stack);
int getSize(LinkedListStack * stack);
int isEmpty(LinkedListStack * stack);

void createStack(LinkedListStack ** stack)
{
    (*stack) = (LinkedListStack *) malloc(sizeof(LinkedListStack));
    (*stack)->List = NULL;
    (*stack)->top = NULL;
}

void destroyStack(LinkedListStack * stack)
{
    while (!isEmpty(stack)){
        Node * popped = pop(stack);
        destroyNode(popped);
    }
    free(stack);
}

Node * createNode(char * newData) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = (char *) malloc(strlen(newData)+1);
    strcpy(newNode->data , newData);
    newNode->nextNode = NULL;
    return newNode;
}

void destroyNode(Node * node){
    free(node->data);
    free(node);
}

void push(LinkedListStack * stack , Node* newNode) {
    if(stack->List == NULL) {
        stack->List = newNode;
    }else {
        Node * oldTop = stack->List;
        while (oldTop->nextNode != NULL) {
            oldTop = oldTop->nextNode;
        }
        oldTop->nextNode = newNode;
    }
    stack->top = newNode;
}

Node * pop(LinkedListStack * stack ) {
    Node * topNode = stack->top;
    if(stack->List == stack->top){
        stack->List = NULL;
        stack->top = NULL;
    }else {
        Node * currentTop = stack->List;
        while (currentTop != NULL && currentTop->nextNode != stack->top){
            currentTop = currentTop->nextNode;
        }
        stack->top = currentTop;
        currentTop->nextNode = NULL;
    }
    return topNode;
}

Node * top(LinkedListStack * stack)
{
    return stack->top;
}

int getSize(LinkedListStack * stack)
{
    int count = 0;
    Node * current = stack->List;
    while (current != NULL) {
        current = current->nextNode;
        count++;
    }
    return count;
}

int isEmpty(LinkedListStack * stack)
{
    return (stack->List == NULL);
}

int main()
{
    int i =0;
    int count = 0;
    Node * popped;

    LinkedListStack * stack;
    createStack(&stack);
    push(stack, createNode("abc"));
    push(stack, createNode("def"));
    push(stack, createNode("efg"));
    push(stack, createNode("hij"));

    count = getSize(stack);
    printf("size : %d , top : %s\n\n", count , top(stack)->data );

    for(i=0; i<count; i++) {
        if(isEmpty(stack)){
            break;
        }
        popped = pop(stack);
        printf("popped : %s  , " ,popped->data);
        destroyNode(popped);
        if(!isEmpty(stack)){
            printf("current top : %s\n", top(stack)->data);
        }else {
            printf("stack is empty \n");
        }
        destroyStack(stack);
    }
}
