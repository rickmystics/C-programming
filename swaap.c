
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 1st num\n");
scanf("%d",&a);
printf("enter 2nd num\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("%d %d \n",a,b);
}
