#include<stdio.h>
int large(int c, int n, int a[c][n])
{
        int i,j,l=0;
        for(i=0;i<c;i++)
               for(j=0;j<n;j++)
                {
                        if(a[i][j]>l)
                                l= a[i][j];
                }
        return l;
}
int small(int c,int n,int a[c][n])
{
        int i,j,s=100000000;
        for(i=0;i<c;i++)
                for(j=0;j<n;j++)
                {
                        if(a[i][j]<s)
                                s=a[i][j];
                }
        return s;
}
void main()
{
        int i,j,p,n,c,r;
        printf("Enter the number of rows \n");
        scanf("%d",&n);
        printf("enter the number of columns \n");
        scanf("%d",&c);
        int sum[c][n];
        int b[c][n];
        printf("Enter the numbers pf 1st array\n");
        for(i=0;i<c;i++)
        {
                for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
        }
        p=large(c,n,b);
        printf("largest number in the array is %d\n",p);
        r=small(c,n,b);
        printf("The smallest elements in the array is %d\n",r);
}