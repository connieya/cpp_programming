#include "stdio.h"
#include "stdlib.h"

typedef int element;

typedef struct tagNode
{
    element data;
} Node;

typedef struct tagArrayStack
{
    int capacity;
    int top;
    Node * nodes;
} ArrayStack;

void createStack(ArrayStack ** stack , int capacity);
void destroyStack(ArrayStack * stack);
void push(ArrayStack * stack , element data);
element pop(ArrayStack * stack);
element top(ArrayStack * stack);
int getSize(ArrayStack * stack);
int isEmpty(ArrayStack * stack);

void createStack(ArrayStack ** stack , int capacity) {
    (*stack) = (ArrayStack *) malloc(sizeof(ArrayStack));
    (*stack)->nodes = (Node*) malloc(sizeof(Node)* capacity);

    (*stack)->capacity = capacity;
    (*stack)->top = 0;
}

void destroyStack(ArrayStack * stack) {
    free(stack->nodes);
    free(stack);
}

void push(ArrayStack * stack , element data) {
    int position = stack->top;

    stack->nodes[position].data = data;
    stack->top++;
}

element pop(ArrayStack * stack){
    int position = --(stack->top);
    return stack->nodes[position].data;
}

element top(ArrayStack * stack) {
    int position = stack->top -1;
    return stack->nodes[position].data;
}

int getSize(ArrayStack * stack){
    return stack->top;
}

int isEmpty(ArrayStack * stack){
    return (stack->top == 0);
}

int main()
{
    int i=0;
    ArrayStack * stack = NULL;
    createStack(&stack , 10);
    push(stack,3);
    push(stack,37);
    push(stack,11);
    push(stack,12);

    printf("capacity : %d , size : %d , top : %d\n\n", stack->capacity , getSize(stack) , top(stack));
    for(i=0; i<4; i++) {
        if(isEmpty(stack)) break;
        printf("Popped : %d", pop(stack));

        if(!isEmpty(stack)){
            printf(" current top : %d\n" , top(stack));
        }else {
            printf(" stack is Empty. \n");
        }
    }
    destroyStack(stack);
}