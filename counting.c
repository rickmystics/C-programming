#include<stdio.h>
void main()
{

        int b=0,i,n,c=1,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                if(a[i]==a[i-1])
                {
                         c=c+1;
                         printf("Total number of duplicate >                }
        }
                if(c==0)
                        printf("No number is duplicated \n">
}