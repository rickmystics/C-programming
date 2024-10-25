#include<stdio.h>
void main()
{
        int a,b,c;
        printf("Enter sides of a triangle \n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&&a==c&&b==c)
        printf("The triangle is equilateral \n");
        else if(a==b||b==c||c==a)
        printf("The triangle is isosceles \n");
        else
        printf("The triangle is scalene \n");
}

