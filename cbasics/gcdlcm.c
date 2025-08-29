#include<stdio.h>
void main()
{
        int n,sum,b,i,gcd=1,lcm=1;
        printf("Enter two number  \n");
        scanf("%d %d",&n,&b);
        if(n<b){
        for(i=2;i<b;i++)
        {
                if(n%i==0&&b%i==0)
                gcd=gcd*i;
                else if((n%i==0&&b%i!=0)||(n%i!=0&&b%i==0))
                lcm=i*gcd;
        }}
        else if(n>b)
        {
        for(i=2;i<n;i++)
        {
                if(n%i==0&&b%i==0)
                gcd=gcd*i;
                else if((n%i==0&&b%i!=0)||(n%i!=0&&b%i==0))
                lcm=i*gcd;
        }}
        printf(" gcd = %d \n",gcd);
        printf(" lcm = %d \n",lcm);
}