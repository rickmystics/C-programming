#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;   // points to the top node
    int count;   // optional: to track size
} stack;
stack* CreateStack() {
    stack* s = (stack*)malloc(sizeof(stack));
    s->top = NULL;
    s->count = 0;
    return s;
}
bool isEmpty(stack* s) {
    return s->top == NULL;
}
void push(stack* s, int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (!temp) {
        printf("Stack Overflow! Memory allocation failed\n");
        return;
    }
    temp->data = value;
    temp->next = s->top;
    s->top = temp;
    s->count++;
    printf("Pushed %d\n", value);
}
int pop(stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop!\n");
        return -1;
    }
    Node* temp = s->top;
    int val = temp->data;
    s->top = s->top->next;
    free(temp);
    s->count--;
    return val;
}
int peek(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->top->data;
}

int size(stack* s) {
    return s->count;
}
void printlist(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    Node* temp = s->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    stack* s = CreateStack();
    int a, n;

    printf("Enter the number of values to be pushed: ");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        push(s, a);
    }

    printlist(s);

    printf("Popped: %d\n", pop(s));
    printlist(s);

    return 0;
}
