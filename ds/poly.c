#include<stdio.h>
#include<stdlib.h>
struct Node{
    int exp;
    int coef;
    struct Node* next;
};
struct Node* createNode(int c , int val)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->coef=c;
    newNode->exp=val;
    newNode->next=NULL;
}
void insertend(struct Node** header , int c, int val )
{
    struct Node* newNode = createNode(c,val);
    if(*header==NULL)
    {
        *header = newNode;
        return;
    }
    struct Node* temp= *header;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;   
}
void printlist(struct Node** header)
{
    struct Node* temp = * header;
    while (temp!=NULL)
    {
        printf("%dx^%d ",temp->coef,temp->exp);
        temp=temp->next;
        if(temp!=NULL)
            printf("+ ");
    }
}
void main()
{
    struct Node* header= NULL;
    int a,coef,exp;
    printf("Enter the number of polynomials :\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("Enter the %d polynomial \n",i);
        printf("Coefficient:");
        scanf("%d",&coef);
        printf("Exponent:");
        scanf("%d",&exp);
        insertend(&header,coef,exp);
    }
    printlist(&header);
}