#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isalnum()

// Structure for stack node
struct Node {
    char data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Push operation
void push(struct Node** top, char data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}

// Pop operation
char pop(struct Node** top) {
    if (*top == NULL)
        return '\0';  // Empty stack
    struct Node* temp = *top;
    char popped = temp->data;
    *top = (*top)->next;
    free(temp);
    return popped;
}

// Peek (return top element)
char peek(struct Node* top) {
    if (top == NULL)
        return '\0';
    return top->data;
}

// Check if stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to return precedence of operators
int precedence(char op) {
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

// Check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// Convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    struct Node* stack = NULL;
    int i = 0, j = 0;
    char ch;

    while ((ch = infix[i++]) != '\0') {
        if (isalnum(ch)) {
            postfix[j++] = ch;  // Operand → directly to output
        } else if (ch == '(') {
            push(&stack, ch);
        } else if (ch == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            pop(&stack); // Remove '('
        } else if (isOperator(ch)) {
            while (!isEmpty(stack) && precedence(peek(stack)) >= precedence(ch)) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }

    // Pop all remaining operators
    while (!isEmpty(stack)) {
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0'; // Null terminate
}

// Main function
int main() {
    char infix[100], postfix[100];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
