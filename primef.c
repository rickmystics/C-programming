#include<stdio.h>
int prime(int n)
{
        int i,sum=0;
        for(i=1;i<=n;i++)
        {
                if(n%i==0)
                sum++;
        }
        if(sum==2)
        printf("it is a prime number \n");
        else
        printf(" it is not a prime number \n");
}
void main()
{
        int n;
        printf("Enter a number \n");
        scanf("%d",&n);
        prime(n);
}
