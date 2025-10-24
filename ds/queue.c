#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Queue {
    struct Node* front;
    struct Node* rear;
};
struct Node* createnode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data= value;
    newNode->next=NULL;
    return newNode;
}
struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->rear=q->front=NULL;
    return q;
}
void push(struct Queue* q , int value)//push = enque
{
    struct Node* newNode = createnode(value);
    if(q->rear==NULL)
    {
        q->rear=q->front= newNode;
        printf("");
        return;
    }
    q->rear->next= newNode;
    q->rear= newNode;
    printf("%d enqueued to queue.\n", value);
}
int pop(struct Queue* q )
{
    if(q->front== NULL)
    {
        printf("The Queue is empty\n");
    }
    struct Node * temp = q->front;
    int value= temp->data;
    q->front=q->front->next;
    if(q->front==NULL)
        q->rear=NULL;
    free(temp);
    printf("%d dequeued from the queue \n",value);
    return value;
}
int peek(struct Queue* q)
{
    if(q->front==NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    return (q->front->data);
}
bool isEmpty(struct Queue* q )
{
    return (q->front==NULL);
}
bool isFull(struct Queue* q){
    return 0;
}
void display(struct Queue* q)
{
    if(q->front==NULL)
    {
        printf("Queue is empty\n");
        return ;
    }
    struct Node* temp= q->front;
    printf("Queue elements \n");
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n" );
}
void insertEnd(struct Node** head , int value)
{
    struct Node* newNode= createnode(value);
    if(*head==NULL)
    {
        *head == newNode;
        return ;
    }
    struct Node* temp= * head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
}
void main()
{
    struct Queue* q= createQueue();
    push(q,10);
    push(q,20);
    push(q,30);
    push(q,40);
    display(q);
    printf("Front element %d\n", peek(q));
    pop(q);
    pop(q);
    pop(q);
    display(q);
    pop(q);
    display(q);
}