#include<stdio.h>;
void main()
{
        int i,j,n,s;
        printf("Enter the size of the matrix ");
        scanf("%d",&n);
        int a[n][n];
        int b[n];
        int c[n];
        int d[n];
        printf("Enter the number of inputs");
        scanf("%d",&s);
        printf("Enter the row column and number \n");
        printf("i j n \n");
        for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                        a[i][j]=0;
        for(i=0;i<s;i++)
        {
                scanf("%d %d %d ",&b[i] ,&c[i] ,&d[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(b[i]==i&&c[i]==j)
                                a[i][j]=d[i];
                }
        }
        for(i=0;i<n;i++)
        {        for(j=0;j<n;j++)
                        printf("%d ",a[i][j]);
                printf(" \n");
        }
    }