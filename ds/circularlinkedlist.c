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
    newNode->next=newNode;
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
    while(temp->next !=*head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next = *head;
}
void printlist(struct Node** head)
{
    struct Node* temp = * head;
    struct Node* start = *head;
    if (start != NULL) 
    {
        do 
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != start);
}
printf("(back to head)\n");
}
void main()
{
    struct Node* head= NULL;
    int a ,i,value;
    printf("Enter the number of nodes you want \n");
    scanf("%d",&a);
    printf("Enter the nodes\n");
    for(i= 1 ;i<=a;i++)
    {
        scanf("%d",&value);
        insertend(&head,value);
    }
    printlist(&head);
}