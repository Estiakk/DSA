#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int top;
    int size;
    int *arr;
}Stack;

Stack *createstack(int size){
    Stack *stack=(Stack*)malloc(sizeof(Stack));
    stack->top=-1;
    stack->size=size;
    stack->arr=(int*)malloc(sizeof(int)*size);
    return stack;
}

void push(Stack *stack, int n){
    if(stack->top==stack->size-1)
        printf("Stack Overflow!!!!!!");
    else{
        stack->top++;
        stack->arr[stack->top]=n;
        printf("%d pushed successfully.\n", n);
    }
}

void pop(Stack *stack){
    if(stack->top==-1)
        printf("Stack Underflow!!!!!!");
    else{
        printf("%d Pop successfull.\n", stack->arr[stack->top]);
        stack->top--;
    }
}

void display(Stack *stack){
    if(stack->top==-1)
        printf("Stack is empty.");
    else{
        printf("Stack elements: ");
        for(int i=0; i<=stack->top; i++){
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}

int main(){
    Stack *stack=createstack(5);
    push(stack, 33);
    push(stack, 19);
    display(stack);
    pop(stack);
    pop(stack);
    free(stack);
    return 0;
}
