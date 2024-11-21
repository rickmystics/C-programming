#include<stdio.h>
void swap(int a ,int b)
{
        b=a+b;
        a=b-a;
        b=b-a;
        printf("After swapping\n");
        printf("Number a %d\n" ,a);
        printf("Number b %d\n", b);
}
void main()
{
        int a,b;
        printf("Enter number 1\n");
        scanf("%d",&a);
        printf("Enter number 2\n");
        scanf("%d",&b);
        printf("Before swap a= %d b= %d",a,b);
        swap(a,b);
}
