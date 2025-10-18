#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Stack structure
typedef struct stack {
    Node* top;
} stack;

// Function to create a new stack
stack* CreateStack() {
    stack* s = (stack*)malloc(sizeof(stack));
    if (!s) {
        printf("Memory allocation failed for stack.\n");
        exit(1);
    }
    s->top = NULL;
    return s;
}

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed for node.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Push operation
void push(stack* s, int data) {
    Node* newNode = createNode(data);
    newNode->next = s->top;
    s->top = newNode;
}

// Pop operation
int pop(stack* s) {
    if (s->top == NULL) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1; // Error value
    }
    Node* temp = s->top;
    int popped = temp->data;
    s->top = s->top->next;
    free(temp);
    return popped;
}

// Check if stack is empty
int isEmpty(stack* s) {
    return s->top == NULL;
}

// Display stack elements
void printlist(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    Node* temp = s->top;
    printf("Stack elements (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function (as you provided)
int main() {
    stack* s = CreateStack();
    int a, n;

    printf("Enter the number of values to be pushed: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        push(s, a);
    }

    printlist(s);

    printf("Popped: %d\n", pop(s));
    printlist(s);

    return 0;
}
