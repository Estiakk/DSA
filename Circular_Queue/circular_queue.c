#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int front;
    int tail;
    int size;
    int *arr;
}Queue;

Queue *createqueue(int size){
    Queue *queue=(Queue*)malloc(sizeof(Queue));
    queue->front=-1;
    queue->tail=-1;
    queue->size=size;
    queue->arr=(int*)malloc(sizeof(int)*size);
    return queue;
}

void enqueue(Queue *queue, int n){
    if((queue->tail+1)%queue->size==queue->front)
    printf("Queue is full!!!\n");
    else{
        queue->tail = (queue->tail+1)%queue->size;
        if(queue->front==-1){
            queue->front++;
        }
        queue->arr[queue->tail]=n;
        printf("Successfully enqueued %d\n", n);
    }
}

void dequeue(Queue *queue){
    if(queue->front==-1)
        printf("Queue is empty!!!\n");
    else{
        printf("Successfully dequeued %d\n", queue->arr[queue->front]);
        if(queue->front==queue->tail){
            queue->front=-1;
            queue->tail=-1;
        } else {
            queue->front=(queue->front+1)%queue->size;
        }
    }
}

void display(Queue *queue){
    if(queue->front == -1){
        printf("Circular Queue elements: (empty)\n");
        return;
    }
    printf("Circular Queue elements: ");
    for(int i=queue->front; i!=queue->tail; i=(i+1)%queue->size){
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main(){
    Queue *queue=createqueue(5);
    display(queue);
    enqueue(queue, 33);
    enqueue(queue, 19);
    enqueue(queue, 21);
    enqueue(queue, 24);
    enqueue(queue, 13);
    enqueue(queue, 25);
    display(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    enqueue(queue, 55);
    display(queue);
    dequeue(queue);
    dequeue(queue);
    enqueue(queue, 56);
    display(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    enqueue(queue, 67);
    free(queue);
    return 0; 
}