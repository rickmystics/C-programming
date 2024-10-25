#include<stdio.h>
void main()
{
int d,k,m;
printf(" ENTER DISTANCE IN METER\n");
scanf("%d",&d);
k=d/1000;
m=d%1000;
printf("%d meter = %d kilometer and %d meter\n",d,k,m);
}
