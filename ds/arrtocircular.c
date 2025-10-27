#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty();
bool isFull();
void enqueue(int data);
int dequeue();
void traverse();

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return ((rear + 1) % MAX_SIZE == front);
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = data;
        printf("%d enqueued to the queue.\n", data);
    }
}

int dequeue() {
    int data = -1;
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
    } else {
        data = queue[front];
        if (front == rear) {
            // Reset when queue becomes empty
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        printf("%d dequeued from the queue.\n", data);
    }
    return data;
}

void traverse() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (true) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

int main() {
    int n, a;
    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");

    printf("Enter the number of elements to enqueue (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a);
        enqueue(a);
    }

    traverse();

    printf("Is queue full? %s\n", isFull() ? "Yes" : "No");

    dequeue();
    traverse();

    enqueue(40);
    enqueue(50);
    enqueue(60);

    traverse();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");

    return 0;
}
