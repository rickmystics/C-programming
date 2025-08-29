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
                if(a[i]==s)
                {        b= a[i];
                         c=i+1;
                }
                else
                        s=a[i];
        }
                if(c>=(n/2))
                        printf("Majority number is  %d\n",b);

}
