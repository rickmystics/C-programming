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
        for(i=0;i<n;i++)
        {
                if(a[i]>a[i-1])
                {
                         c++;
                         b=a[i];
                }
        }
        printf("The peak element is %d\n",b);
        if(c==0)
        {
                for(i=0;i<n;i++)
                if(a[i]>a[i-1]&&a[i]>a[i+1])
                {       c++;
                        printf("The peak element is %d\n",a[i]);
                }
        }
}