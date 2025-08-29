#include<stdio.h>
void main()
{

        int b=0,i,n,c=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the position to be deleted \n");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
                if(i==s)
                {
                        a[i-1]=a[i];
                        a[i]=a[i+1];
                }
        }
        n=n-1;
        printf("The new array is \n");
        for(i=0;i<n;i++)
                printf("%d\n",a[i]);
}
