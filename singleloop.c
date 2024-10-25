#include<stdio.h>
void main()
{
        int n,sum,b=1,i,c=0,d=2;
        printf("Enter the value of  n to continue lucas  \n>        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                if(i==0)
                printf(" %d \n",c++);
                else if(i==1)
                printf(" %d \n",b);
                else if(i==2)
                printf(" %d \n",d);
                else
                {       sum=c+b+d;
                        printf(" %d \n",sum);
                        c=b;
                        b=d;
                        d=sum;
                }
        }
}
