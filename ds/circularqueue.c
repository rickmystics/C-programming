#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5
struct circularqueue
{
    int items[MAX];
    int front;
    int rear;
};
void initqueue(struct circularqueue *q)
{
    q->front=0;
    q->rear=-1;
}
int isFull(struct circularqueue *q)
{
    return((q->rer+1)%MAX==q->front);
}
int isEmpty(struct circularqueue *q)
{
    return(q->front==-1);
}
void enqueue(Struct circularqueue* q, int value)
{
    if(isFull(q))
    {
        printf("Queue is Full Cannot enter the value %d \n",value);
        return;
    }
    if(isEmpty(q))
    {
        q->front=0;
    }
    q->rear=(q->rear+1)%MAX;
    q->items 
}
int dequeue(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }

    int value = q->items[q->front];

    if (q->front == q->rear) {
        // Only one element left
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }

    printf("%d dequeued from queue.\n", value);
    return value;
}
int peek(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return q->items[q->front];
}
void display(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
int main() {
    struct CircularQueue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    display(&q);

    dequeue(&q);
    dequeue(&q);
    display(&q);

    enqueue(&q, 50);
    enqueue(&q, 60);
    display(&q);

    enqueue(&q, 70);  // should show queue full

    printf("Front element: %d\n", peek(&q));

    return 0;
}