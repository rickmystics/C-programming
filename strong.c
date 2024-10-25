#include <stdio.h>
void main()
{
    int n, o, d, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    o = n;
    while (n > 0) {
        d = n % 10;
        fact = 1;
        for (int i = 1; i <= d; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    if (sum == o) {
        printf("%d is a Strong Number.\n", o);
    } else {
        printf("%d is not a Strong Number.\n", o);
    }
}
