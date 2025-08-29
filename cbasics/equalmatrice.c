#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n][n];
        int sum=0;
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
               for(j=0;j<n;j++)
                        if(a[i][j]!=b[i][j]){
                        sum++;
                        break; }
        if(sum==0)
        printf("The array is equal \n");
        else
        printf("The array is not equal \n");
}