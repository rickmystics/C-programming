#include<stdio.h>
void main()
{
char c;
printf("ENTER A ALPHABET \n");
scanf("%c",&c);
if(c<=96)
{
        printf(" %c is in upper case \n",c);
}
else{
        c=c-32;
         printf(" The upper case is %c \n",c);
 