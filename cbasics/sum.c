#include<stdio.h>
int add(int p, int q)
{
         return p+q;
}
void main()
{
        int p,q,r;
        printf("Enter 2 numbers \n");
        scanf("%d",&p);
        scanf("%d",&q);
        r=add(p,q);
        printf("The sum is %d\n",r);
}




