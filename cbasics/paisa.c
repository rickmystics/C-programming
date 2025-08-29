#include<stdio.h>
void main()
{
int p,r,pa;
printf("Enter amount in paisa \n");
scanf("%d",&p);
r=p/100;
pa=p%100;
printf("%d paisa =  %d rupees and %d paisa\n",p,r,pa);
}