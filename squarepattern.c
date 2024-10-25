#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<=4;i++)
        {
                for(j=1;j<=4;j++)
                {
                if(i==2||i==3)
                {
                if(j==1||j==4)
                printf("* ");
                else if(j==2||j==3)
                printf("  ");
                }
                else if(i==1||i==4)
                printf("* ");
                }
                printf("\n");
        }
}
