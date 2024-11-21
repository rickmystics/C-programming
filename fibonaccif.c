#include<stdio.h>
int fibo(int n)
{
        int i,c=0,b=1,sum;
         for(i=1;i<=n;i++)
        {
                if(i==1)
                printf(" ");
                else if(i==2)
                printf(" ");
                else
                {       sum=c+b;
                        c=b;
                        b=sum;
                }
                if(n==i)
                        break;
        }
        return sum;
}
void main()
{
        int i,n,r,c=0,b=1,sum;
        printf("Enter the serial number\n");
        scanf("%d",&n);
        r=fibo(n);
        printf("The fibonacci number is %d\n",r);
}
