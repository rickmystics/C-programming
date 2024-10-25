#include<stdio.h>
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
        for(i=0;i<n;i++)
        {
                if(a[i]>b)
                        b= a[i];
                else
                        c=a[i];
        }
        printf("The largest number is %d\n",b);
}


