#include<stdio.h>
void main()
{
        int i,j,n;
        printf("Enter the square matrix element number \n");
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
        for(i=0;i<n;i++)
               for(j=0;j<n;j++){
                        if(i==0)
                                if(j==(n-2)||j==(n-1)){
                                         sum=sum+a[i][j];}
                        if(i==1)
                                if(j==(n-1)){
                                        sum=sum+a[i][j];}
                }
        printf("Sum =%d \n",sum);
}