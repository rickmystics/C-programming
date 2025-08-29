#include<stdio.h>
void main()
{

        int i,j,n,c=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n],b[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                if(a[j]==a[j+1])
                {
                         a[j]=a[j+2];
                        a[j+1]=a[j+3];
                        c=c+2;
                }

        }
        n=n-c;
        printf("The unique numbers found in array are \n");
        for(i=0;i<n;i++)
                        printf("%d\n",a[i]);

}