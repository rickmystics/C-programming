#include<stdio.h>
int sum(int a[] ,int n)
{
        int i,sum=0;
        for(i=0;i<n;i++)
        sum= sum+a[i];
        return sum;
}
void main()
{
        int i,n,r;
        printf("Enter number of terms\n");
        scanf("%d",&n);
        int a[n];
        printf("Enter your numbers\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        r=sum(a ,n);
        printf("Sum is %d \n",r);
}
