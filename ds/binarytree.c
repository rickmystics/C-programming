#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}
struct Node* createnode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;
}
struct Node* insertNode(struct Node* root, int value)
{
    struct Node* newNode= createnode(value);
    if(root==NULL)
        return createnode(value);
    if(value< root->data)
        root->left=insertNode(root->left,value);
    else if(value< root->data)
        root->right=insertNode(root->right, value);
    return root;
}
void inorder(struct Node* root)
{
    if(root==NULL)
        return;
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct NOde* root)
{
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct Node* root= NULL;
    int n , value;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element\n",i+1);
        scanf("%d",&value);
        root=Insert(root , value);
    }
    printf("Preorder traversal :");
    preorder(root);
    printf("\n");
    printf("Inorder traversal :");
    inorder(root);
    printf("\n");
    printf("Postorder traversal :");
    postorder(root);
    printf("\n");   36
}