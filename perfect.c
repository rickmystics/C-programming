#include<stdio.h>
void main()
{
        int a,b,i,sum;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        b=a;
        for(i=1;i<b;i++)
        {
                if(a%i==0)
                sum= sum+i;

        }
        if(sum == a)
                printf("it is a perfect number \n");
        else
                printf("it is not a perfect number \n");
}