#include<stdio.h>
void main()
{
int a,b,c,s;
printf("enter a 6 digit number\n");
scanf("%d",&a);
b=a/100000;
c=a%10;
s=b+c;
printf(" sum of digits = %d\n",s);
}

