#include<stdio.h>
void main()
{
int a,h,b,t,o,s;
printf("ENTER THREE DIGIT NUMBER\n");
scanf("%d",&a);
h=a/100;
b=a%100;
t=b/10;
o=b%10;
s=o*100+t*10+h;
printf("reverse digit= %d\n",s);
}
