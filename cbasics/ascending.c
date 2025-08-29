#include<stdio.h>
void main()
{

        int b=0,i,j,n,c=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("The numbers in ascending order are \n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-1-i;j++)
                if(a[j]>a[j+1])
                {
                        b=a[j];
                        a[j]=a[j+1];
                        a[j+1]=b;
                }
        }
        for(i=0;i<n;i++)
                        printf("%d\n",a[i]);

}