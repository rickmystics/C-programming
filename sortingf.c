#include<stdio.h>
int sort(int a[], int n)
{
        int i,j,b=0,c=0;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-1-i;j++)
                if(a[j]>a[j+1])
                {
                        b=a[j];
                        a[j]=a[j+1];
                        a[j+1]=b;
                }
        }
        printf("The array in acending order is\n");
        for(i=0;i<n;i++)
                        printf("%d\n",a[i]);
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
        r=sort(a,n);
        printf("Total elements  Sorted %d\n",r);
}