#include<math.h>
#include<stdio.h>
void main()
{
float a,b,c,d,e,f;
printf("ENTER THE values OF A QUADRATIC EQUATION \n");
scanf("%f %f %f",&a,&b,&c);
f=b*b-4*a*c;
if(f<=-1)
{
printf("The roots are imaginary \n");
}
else if(f==0)
{
printf("The roots are real and equal botha are same \n");
}
else if(f>=0)
{
printf("The roots are real and unequal \n");
}
d=((-b+sqrt(b*b -4*a*c))/2*a);
e=((-b-sqrt(b*b -4*a*c))/2*a);
printf("Roots are %f %f\n",e,d);
}