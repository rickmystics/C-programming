#include<stdio.h>
void main()
{
        float a,b,d,h;
        float e,f,g;
        char ca;
        printf("Enter number 1 \n");
        scanf("%f",&a);
        printf("Enter number 2 \n");
        scanf("%f",&b);
        printf("Choose A for addition S for substraction M for multiplication D for division \n");
        scanf(" %c",&ca);
        if(ca=='A')
        {
                 d= a+b;
                printf("THe addition of two numbers  is %f\n",d);
        }
        else if(ca=='M')
        {
                e= a*b;
                printf("THe multiplication of two numbers  is %f\n",e);
        }
        else if(ca=='S')
        {
                f= a-b;
                printf("THe substraction of two numbers  is %f\n",f);
        }
        else if(ca=='D')
        {
                g= a/b;
                printf("THe division of two numbers  is %f\n",g);
        }
}