#include<stdio.h>
void main()
{
int a;
printf("Enter total marks secured bya student \n");
scanf("%d",&a);
if(a>=90&&a<=100)
        printf("SECRUED GRADE IS O \n");
else if(a>=80&&a<90)
        printf("SECRUED GRADE IS E \n");
else if(a>=70&&a<80)
        printf("SECRUED GRADE IS A \n");
else if(a>=60&&a<70)
        printf("SECRUED GRADE IS B \n");
else if(a>=50&&a<60)
        printf("SECRUED GRADE IS C \n");
else if(a>=40&&a<50)
        printf("SECRUED GRADE IS D \n");
else
        printf("SECRUED GRADE IS F \n");
}

