#include<stdio.h>
void main()
{

        int b=0,i,n,c=0,s,g;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the position to be inserted \n");
        scanf("%d",&s);
        printf("Enter the number \n");
        scanf("%d",&g);
        n=n+1;
        for(i=n;i>=s;i--)
        {
                a[i+1]=a[i];
                a[i]=a[i-1];

        }
        for(i=n;i>=s;i--)
        {
                if(i==s)
                        a[i-1]=g;
        }
        printf("The new array is \n");
        for(i=0;i<n;i++)
                printf("%d\n",a[i]);
}