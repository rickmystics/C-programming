#include<stdio.h>
void main()
{
int a,b,c,d,e,f,s,z,t,h,g,m,ss;
printf("ENTER TIME IN HOUR MINUTE AND SECOND FORMAT\n");
printf("Time 1 :\n");
scanf("%d:%d:%d",&a,&b,&c);
printf("time 2 :\n");
scanf("%d:%d:%d",&d,&e,&f);
z=d*3600+e*60+f;
s=a*3600+b*60+c;
t=s+z;
h=t/3600;
g=t%3600;
m=g/60;
ss=g%60;
printf("Total time in hour minute and seconds format is %d:>}