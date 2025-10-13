#include<stdio.h>
#include<stdlib.h>
#define MAX=6
struct Queue
{
    struct Node* front;
    struct Node* rear;
};
void initqueue(struct Queue* q)
{
    q->front=0;
    q->rear=-1;
}
int isfull(struct Queue*q)
{
    return q->rear=MAX-1;
}
int isempty(struct Queue* q)
{
    return q->front == -1 || q->front > q->rear;
}
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue %d.\n", value);
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
    printf("%d enqueued.\n", value);
}
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int value = q->items[q->front];
    q->front++;
    printf("%d dequeued.\n", value);
    return value;
}
int peek(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return q->items[q->front];
}
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->items[i]);
    printf("\n");
}
int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    printf("Front element: %d\n", peek(&q));

    dequeue(&q);
    display(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);  // Should show full

    display(&q);
    return 0;
}