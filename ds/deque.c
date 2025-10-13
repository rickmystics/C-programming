#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Deque {
    int items[MAX];
    int front;
    int rear;
};

// Initialize deque
void initDeque(struct Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
}

// Check if full
int isFull(struct Deque *dq) {
    return ((dq->front == 0 && dq->rear == MAX - 1) ||
            (dq->front == dq->rear + 1));
}

// Check if empty
int isEmpty(struct Deque *dq) {
    return (dq->front == -1);
}

// Insert at front
void insertFront(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full! Cannot insert %d at front.\n", value);
        return;
    }

    if (dq->front == -1) { // first element
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX - 1;
    } else {
        dq->front--;
    }

    dq->items[dq->front] = value;
    printf("%d inserted at front.\n", value);
}

// Insert at rear
void insertRear(struct Deque *dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full! Cannot insert %d at rear.\n", value);
        return;
    }

    if (dq->front == -1) { // first element
        dq->front = dq->rear = 0;
    } else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } else {
        dq->rear++;
    }

    dq->items[dq->rear] = value;
    printf("%d inserted at rear.\n", value);
}

// Delete from front
void deleteFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from front.\n");
        return;
    }

    int value = dq->items[dq->front];
    if (dq->front == dq->rear) { // only one element
        dq->front = dq->rear = -1;
    } else if (dq->front == MAX - 1) {
        dq->front = 0;
    } else {
        dq->front++;
    }

    printf("%d deleted from front.\n", value);
}

// Delete from rear
void deleteRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from rear.\n");
        return;
    }

    int value = dq->items[dq->rear];
    if (dq->front == dq->rear) { // only one element
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } else {
        dq->rear--;
    }

    printf("%d deleted from rear.\n", value);
}

// Display
void display(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty!\n");
        return;
    }

    printf("Deque elements: ");
    int i = dq->front;
    while (1) {
        printf("%d ", dq->items[i]);
        if (i == dq->rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main function
int main() {
    struct Deque dq;
    initDeque(&dq);

    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    display(&dq);

    deleteRear(&dq);
    display(&dq);

    deleteFront(&dq);
    display(&dq);

    insertFront(&dq, 40);
    insertRear(&dq, 50);
    display(&dq);

    return 0;
}
