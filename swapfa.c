#include<stdio.h>
void swap(int a[] ,int n)
{
        int i,s;
        for(i=0;i<n;i++)
        {
                if(i==0)
                {
                        s=a[i];
                        a[i]=a[n-1];
                        a[n-1]=s;
                }
        }
        printf("Numbers after swapping\n");
        for(i=0;i<n;i++)
        {
                printf("%d \n",a[i]);
        }
}
void main()
{
        int b=0,i,j,n,r=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        swap(a,n);
}