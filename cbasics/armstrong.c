#include<stdio.h>
void main()
{
        int a,b,c,sum;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        c=a;
        while(a!=0)
        {
                b=a%10;
                sum= sum+ b*b*b;
                a=a/10;

        }
        if(sum==c)
        printf(" %d is a armstrong number \n",sum);
        else
        printf(" %d is not an armstrong number \n",c);
}