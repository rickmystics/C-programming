#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createnewNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
}
void insertatend(struct Node** head,int value)
{
    struct Node* newNode = createnewNode(value);
    if(*head== NULL){
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next= newNode;
}
void insertlasttofirst(struct Node** head)
{
    struct Node* temp= *head;
    struct Node* prev = NULL;

    // Traverse to last node
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Detach last node
    prev->next = NULL;

    // Move last node to front
    temp->next = *head;
    *head = temp;

}

void printlist(struct Node** head)
{
    struct Node* temp = *head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("Null");
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
        insertatend(&head,value);
    }
    printlist(&head);
    printf("The change in last node to first node\n");
    insertlasttofirst(&head);
    printlist(&head);
}