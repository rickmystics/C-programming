#include<stdio.h>
void main()
{
        int a,b,sum;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        do
        {
                b=a%10;
                a=a/10;
                sum=sum+b;
        }while(a!=0);
        printf(" %d",sum);
}

