#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void insertend(struct Node** head , int value)
{
    struct Node* newNode = createNode(value);
    if(*head==NULL)
    {
        *head = newNode;
        return;
    }
    struct Node* temp= *head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void printlist(struct Node** head)
{
    struct Node* temp = *head;
    while(temp!=NULL)
    {
        printf("%d->\n",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void main()
{
    int a ,i,val;
    printf("Enter the number of nodes you want \n");
    scanf("%d",&a);
    struct Node* head= NULL;
    printf("Enter the nodes\n");
    for(i= 1 ;i<=a;i++)
    {
        scanf("%d",&val);
        insertend(&head,val);
    }
    printlist(&head);
}