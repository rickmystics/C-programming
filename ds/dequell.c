#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Define deque structure
struct Deque {
    struct Node *front;
    struct Node *rear;
};

// Initialize an empty deque
void initDeque(struct Deque *dq) {
    dq->front = dq->rear = NULL;
}

// Check if deque is empty
int isEmpty(struct Deque *dq) {
    return dq->front == NULL;
}

// Insert at front
void insertFront(struct Deque *dq, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = dq->front;

    if (isEmpty(dq)) {
        dq->rear = newNode;
    } else {
        dq->front->prev = newNode;
    }

    dq->front = newNode;
    printf("%d inserted at front.\n", value);
}

// Insert at rear
void insertRear(struct Deque *dq, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = dq->rear;

    if (isEmpty(dq)) {
        dq->front = newNode;
    } else {
        dq->rear->next = newNode;
    }

    dq->rear = newNode;
    printf("%d inserted at rear.\n", value);
}

// Delete from front
void deleteFront(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from front.\n");
        return;
    }

    struct Node *temp = dq->front;
    int value = temp->data;

    dq->front = dq->front->next;

    if (dq->front == NULL) {
        dq->rear = NULL;
    } else {
        dq->front->prev = NULL;
    }

    free(temp);
    printf("%d deleted from front.\n", value);
}

// Delete from rear
void deleteRear(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from rear.\n");
        return;
    }

    struct Node *temp = dq->rear;
    int value = temp->data;

    dq->rear = dq->rear->prev;

    if (dq->rear == NULL) {
        dq->front = NULL;
    } else {
        dq->rear->next = NULL;
    }

    free(temp);
    printf("%d deleted from rear.\n", value);
}

// Display deque
void display(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty!\n");
        return;
    }

    struct Node *temp = dq->front;
    printf("Deque elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function for demonstration
int main() {
    struct Deque dq;
    initDeque(&dq);

    insertFront(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    insertRear(&dq, 25);
    display(&dq);

    deleteFront(&dq);
    display(&dq);

    deleteRear(&dq);
    display(&dq);

    insertFront(&dq, 40);
    insertRear(&dq, 50);
    display(&dq);

    return 0;
}
