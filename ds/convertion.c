#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    char arr[MAX];
    int top;
} Stack;

Stack* createStack() {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    return s;
}
int isEmpty(Stack* s) {
    return s->top == -1;
}
void push(Stack* s, char c) {
    s->arr[++(s->top)] = c;
}
char pop(Stack* s) {
    if (isEmpty(s)) return -1;
    return s->arr[(s->top)--];
}
char peek(Stack* s) {
    if (isEmpty(s)) return -1;
    return s->arr[s->top];
}
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
void infixToPostfix(char* infix, char* postfix) {
    Stack* s = createStack();
    int i = 0, k = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        // Operand → directly to output
        if (isalnum(c)) {
            postfix[k++] = c;
        }
        // '(' → push to stack
        else if (c == '(') {
            push(s, c);
        }
        // ')' → pop until '('
        else if (c == ')') {
            while (!isEmpty(s) && peek(s) != '(') {
                postfix[k++] = pop(s);
            }
            pop(s); // remove '('
        }
        // Operator
        else {
            while (!isEmpty(s) && precedence(peek(s)) >= precedence(c)) {
                postfix[k++] = pop(s);
            }
            push(s, c);
        }
    }

    // Pop all remaining operators
    while (!isEmpty(s)) {
        postfix[k++] = pop(s);
    }
    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
