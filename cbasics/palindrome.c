#include<stdio.h>
void main()
{
        int a,b,sum,c;
        printf("ENTER A NUMBER \n");
        scanf("%d",&a);
        c=a;
        do
        {
                b=a%10;
                a=a/10;
                sum=sum*10+b;
        }while(a!=0);
        if(sum == c)
                printf("%d is a palindrome number \n",c);
        else
                printf("%d is not a palindrome number \n",c>}

}