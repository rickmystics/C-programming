#include<stdio.h>
void main()
{
float b,m,d;
float pl,dp,p,l;
printf("ENTER  BUYING PRICE\n");
scanf("%f",&b);
printf("ENTER MARKER PRICE\n");
scanf("%f",&m);
printf("ENTER THE DISCOUNT\n");
scanf("%f",&d);
pl=m*(d/100);
dp=m-pl;
l=dp-b;
p=(l/b)*100;
printf("SELLER MADE %f %%\n",p);
}

