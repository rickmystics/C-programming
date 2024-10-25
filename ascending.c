#include<stdio.h>
void main()
{

        int b=0,i,n,c=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the element to be searched \n");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
                if(a[i]==s)
                {        b= a[i];
                         c=i+1;
                         printf("The number %d found at the>                }
        }
                if(c==0)
                        printf("Number not found \n");

}