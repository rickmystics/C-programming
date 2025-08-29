#include<stdio.h>
void main()
{
        int a,b,i,sum;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        b=a;
        for(i=2;i<b;i++)
        {
                if(a%i==0)
                sum++;
        }
        if(sum==0)
        printf("it is a prime number \n");
        else
        printf(" it is not a prime number \n");
}