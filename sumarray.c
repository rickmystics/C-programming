#include<stdio.h>
void main()
{

        int b=0,i,j,n,c=0,s,d;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the sum \n");
        scanf("%d",&s);
        for(j=0;j<n;j++)
        {
                if((a[j-1]+a[j]+a[j+1])==s)
                {
                         c=j;
                         d=j+2;
                         printf("The sum  %d found between and including indices  %d and %d\n",s,c,d);
                }
        }

                if(c==0)
                        printf("Number not found \n");

}
