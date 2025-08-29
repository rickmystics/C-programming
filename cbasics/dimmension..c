#include<stdio.h>
void main()
{
        int i,j,n,c=0,s,d;
        printf("Enter the number of cities \n");
        scanf("%d",&j);
        printf("Enter number of days \n");
        scanf("%d",&n);
        int a[n];
        int b[n];
        printf("Enter the temperature of city 1 \n");
        for(i=0;i<n;i++)
        {
                scanf(" %d" ,&a[i]);
        }
        printf("Enter the temperature of city 2 \n");
        for(i=0;i<n;i++)
        {
                scanf(" %d" ,&b[i]);
        }
        for(i=0;i<n;i++)
        {
                j=i+1;
                printf(" City 1 Day %d =  %d\n",j,a[i]);
        }
        for(i=0;i<n;i++)
        {
                j=0;
                j=1+i;
                printf(" City 2 Day %d =  %d\n",i,b[i]);
        }
}