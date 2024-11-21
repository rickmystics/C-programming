#include<stdio.h>
int factorial(int a)
{
        int fac=1, i;
        for(i=1;i<=a;i++)
                fac=fac*i;
        return fac;
}
void main()
{
        int a,i,fac=1,r;
        printf("Enter a numebr \n");
        scanf("%d",&a);
        r=factorial(a);
        printf("The factorial is %d\n",r);
}


