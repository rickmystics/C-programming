#include<stdio.h>
void main()
{
        int n,sum,b=3,i,c=1;
        printf("Enter the value of  n to continue lucas  \n>        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i==1)
                printf(" %d \n",c);
                else if(i==2)
                printf(" %d \n",b);
                else
                {       sum=c+b;
                        printf(" %d \n",sum);
                        c=b;
                        b=sum;
                }
        }
}