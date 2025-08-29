#include <stdio.h>
int sec(int a[] ,int n)
{
        int l, sl;
        for (int i = 0; i < n; i++)
        {
                if (a[i] > l)
                {
                        sl = l;
                        l = a[i];
                }
                else if(a[i]>sl&& a[i]!=l)
                        sl=a[i];
        }
         return sl;
}
void main()
{
        int n, b, i;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int a[n];
        printf("Enter %d numbers:\n ", n);
        for(i = 0; i < n; i++)
        {
                scanf("%d", &a[i]);
        }
        b=sec(a,n);
        printf("The second largest number is %d\n",b);
}