#include<stdio.h>
void main()
{
        int i,j,a,e=1;
        for(i=65;i<=70;i++)
        {
                a=i;
                e=1;
                for(j=65;j<=i;j++)
                {
                printf("%c ",a);
                a=i-e;
                e++;
                }
                printf("\n");
        }
}