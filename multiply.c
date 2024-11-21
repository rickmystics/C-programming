#include<stdio.h>
void main()
{
        int i,j,n,k;
        printf("Enter the index of square matrice \n");
        scanf("%d",&n);
        int a[n][n];
        int sum[n][n];
        int b[n][n];
        printf("Enter the numbers pf 1st array\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                      scanf("%d",&a[i][j]);
        }
        printf("Enter the number of 2nd array \n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
        }
         for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                sum[i][j]=0;
        }
        for(i=0;i<n;i++)
               for(j=0;j<n;j++)
                        for(k=0;k<n;k++)
                            sum[i][j]+=a[i][k]*b[k][j];
        printf("Sum in array form \n");
        for(i=0;i<n;i++)
        {       for(j=0;j<n;j++)
                        printf("%d  ",sum[i][j]);
                printf("\n");
        }
}