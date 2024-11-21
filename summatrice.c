#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[2][2];
        int sum[2][2];
        int b[2][2];
        printf("Enter the numbers pf 1st array\n");
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter the number of 2nd array \n");
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                scanf("%d",&b[i][j]);
        }
        for(i=0;i<n;i++)
               for(j=0;j<2;j++)
                        sum[i][j]=a[i][j]+b[i][j];
        printf("Sum in array form \n");
        for(i=0;i<n;i++)
        {       for(j=0;j<2;j++)
                        printf("%d  ",sum[i][j]);
                printf("\n");
        }
}