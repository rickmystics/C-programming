#include<stdio.h>
void main()
{
        int a,b,i,fac=1;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        b=a;
        printf("The factorial of the number is \n");
        for(i=1;i<=b;i++)
        {

                fac=fac*i;

        }
        printf("%d \n",fac);
}