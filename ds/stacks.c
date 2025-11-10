#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct stack {
    struct Node* top;   // points to the top node
    int count;          // optional: to track size
};

struct stack* CreateStack() {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->top = NULL;
    s->count = 0;
    return s;
}

bool isEmpty(struct stack* s) {
    return s->top == NULL;
}

void push(struct stack* s, int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
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

int pop(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop!\n");
        return -1;
    }
    struct Node* temp = s->top;
    int val = temp->data;
    s->top = s->top->next;
    free(temp);
    s->count--;
    return val;
}

int peek(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->top->data;
}

int size(struct stack* s) {
    return s->count;
}

void printlist(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    struct Node* temp = s->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct stack* s = CreateStack();
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
   