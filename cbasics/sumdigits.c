#include<stdio.h>
void main()
{
int a,b,c,d,e,s;
printf("ENTER THREE DIGIT NUMBER\n");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
s=b+d+e;
printf("SUM OF THE DIGITS = %d\n",s);
}


