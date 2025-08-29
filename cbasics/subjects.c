#include<stdio.h>
void main()
{
        float s1,s2,s3,s4,s5,sum;
        float avg,p;
        printf("Enter the number of first subject\n");
        scanf("%f",&s1);
        printf("Enter the number of second subject\n");
        scanf("%f",&s2);
        printf("Enter the number of third subject\n");
        scanf("%f",&s3);
        printf("Enter the number of fourth subject\n");
        scanf("%f",&s4);
        printf("Enter the number of fifth subject\n");
        scanf("%f",&s5);
        sum=(s1+s2+s3+s4+s5);
        avg=sum/5;
        printf("The average of 5 subjects is %f\n",avg);
        p=(sum/10);
        printf("The percentage is %f %%\n",p);
}


