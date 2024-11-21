#include<stdio.h>
int largesmall(int a[] , int n)
{
        int i,b=0,c=0;
        for(i=0;i<n;i++)
        {
                if(a[i]>b)
                        b= a[i];
        }
        c=b;
        for(i=0;i<n;i++)
        {
                if(a[i]<c)
                        c=a[i];
        }
        printf("The largest number is %d\n",b);
        printf("The smallest number is %d\n",c);
}
void main()
{
        int b=0,i,n,c;
        printf("Enter the n term \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        largesmall(a,n);
}