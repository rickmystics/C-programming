#include<stdio.h>
#include<math.h>
void main()
{
        float a,i,d,sum=0,temp,j;
        printf("Enter the value of n \n");
        scanf("%f",&a);
        for(i=1;i<=a;i++)
        {
                temp=1;
                temp= sqrt(i);
                printf("%f \n",temp);
                sum = sum+temp;
        }
        printf("%f",sum);
}


