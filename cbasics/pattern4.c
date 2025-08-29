#include<stdio.h>
void main()
{
        int i,j,a,sum=1;
        printf("Enter thr e value of n \n");
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
                printf("%d ",sum);
                sum=1+2*sum;
        }
}