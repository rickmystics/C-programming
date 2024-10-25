#include <stdio.h>
#include <math.h>
void main()
{
        float a, b, c, d, r1, r2, r, i;
        printf("Enter coefficients a, b, and c: ");
        scanf("%f %f %f", &a, &b, &c);
        d = b * b - 4 * a * c;
        switch (d > 0)
        {
                case 1:
                r1 = (-b + sqrt(d)) / (2 * a);
                r2 = (-b - sqrt(d)) / (2 * a);
                printf("Roots are real and different.\n");
                printf("Root 1 = %f\n", r1);
                printf("Root 2 = %f\n", r2);
                break;
                case 0:
                switch (d == 0)
                {
                        case 1:
                        r1 = r2 = -b / (2 * a);
                        printf("Roots are real and the same.\n");
                        printf("Root 1 = Root 2 = %f\n", r1);
                        break;
                        case 0 :
                        r = -b / (2 * a);
                        i = sqrt(-d) / (2 * a);
                        printf("Roots are complex and different.\n");
                        printf("Root 1 = %f + %f\n", r,i);
                        printf("Root 2 = %f - %f\n", r,i);
                        break;
                }
                break;
        }
}