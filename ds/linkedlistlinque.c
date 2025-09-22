#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

bool isEmpty();
void enqueue(int data);
int dequeue();
void traverse();
bool isFull();
bool isEmpty() {
    return (front == NULL);
}

bool isFull() {
    return false; 
}

void enqueue(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed! Cannot enqueue.\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued to the queue.\n", data);
}

int dequeue() {
    int data = -1;
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return data;
    }

    struct Node* temp = front;
    data = temp->data;

    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }

    free(temp); 
    printf("%d dequeued from the queue.\n", data);
    return data;
}

void traverse() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    struct Node* current = front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n,a;
    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");
printf("Enter the n of the numbers to enter in the queue \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        enqueue(a);
    }
    // Traverse the queue
    traverse();

    // Dequeue an element
    dequeue();
    traverse();

    // Enqueue more elements
    enqueue(40);
    enqueue(50);
    traverse();
    
    // Dequeue all remaining elements
    while (!isEmpty()) {
        dequeue();
    }
    
    // Check final state
    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");

    return 0;
}