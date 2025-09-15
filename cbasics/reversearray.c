#include<stdio.h>
void display(int arr[] , int n)
{
        for(int j=n;j<=n;j++)
        printf("%d\n",arr[j]);
        //n=n-1;
        if(n==0)
                return ;
        return display(arr,n-1);
}
void main()
{

        int b=0,i,j,n,c=0,s;
        printf("Enter the number of elements \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the numbers \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("The numbers in reverse order are \n");
        display(a,n);
        //for(i=0;i<n;i++)
        //{
        //        for(j=0;j<n-1-i;j++)
        //        {
        //                b=a[j];
        //                a[j]=a[j+1];
        //                a[j+1]=b;
        //        }5

        //}
        //for(i=0;i<n;i++)
          //              printf("%d\n",a[i]);

}