#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=5;j++)
                {
                        if(i==1)
                        {if(j==3)
                        printf(" *");
                        else
                        printf("  ");
                        }
                        if(i==2)
                        {if(j==2||j==3||j==4)
                        printf(" *");
                        else
                        printf("  ");
                        }
                        if(i==3)
                        {
                        printf(" *");
                        }
                }
                printf("\n");
        }
}