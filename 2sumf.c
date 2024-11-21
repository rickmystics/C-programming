#include<stdio.h>
int sums(int c, int n, int a[c][n])
{
        int i,j,sum;
        for(i=0;i<c;i++)
               for(j=0;j<n;j++)
                        sum=sum+a[i][j];
        printf("Sum in array form \n");
        return sum;
}
void main()
{
        int i,j,n,c,r;
        printf("Enter the number of rows \n");
        scanf("%d",&n);
        printf("enter the number of columns \n");
        scanf("%d",&c);
        int sum[c][n];
        int b[c][n];
        printf("Enter the numbers of 1st array\n");
        for(i=0;i<c;i++)
        {
                for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
        }
        r=sums(c,n,b);
        printf("The sum of the elements in the array is %d\n",r);
}
