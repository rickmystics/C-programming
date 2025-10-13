#include<stdio.h>
#include<stdlib.h>
struct Queue {
    int *items;
    int front;
    int rear;
    int capacity;
};
void initQueue(struct Queue *q, int capacity) {
    q->items = (int *)malloc(capacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->capacity = capacity;
}
int isEmpty(struct Queue *q) {
    return q->front > q->rear;
}
void resize(struct Queue *q) {
    q->capacity *= 2;
    q->items = (int *)realloc(q->items, q->capacity * sizeof(int));
    printf("Queue resized to capacity %d.\n", q->capacity);
}
void enqueue(struct Queue *q, int value) {
    if (q->rear == q->capacity - 1) {
        resize(q);
    }
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
void freeQueue(struct Queue *q) {
    free(q->items);
}
int main() {
    struct Queue q;
    initQueue(&q, 3);  // Start small to show resizing

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    enqueue(&q, 40);  // Triggers resize
    enqueue(&q, 50);
    display(&q);

    dequeue(&q);
    dequeue(&q);
    display(&q);

    printf("Front element: %d\n", peek(&q));

    freeQueue(&q);
    return 0;
}