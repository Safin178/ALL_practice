#include<stdio.h>
int main()
{
    int a, b;
    double x;

    scanf("%d%d", &a, &b);
    if (a == 1)
    {
        x =   b * 4.00 ;
        printf("Total: R$ %.2lf\n", x);

    }
    if (a == 2)
    {
        x =   b * 4.50 ;
        printf("Total: R$ %.2lf\n", x);

    }if (a == 3)
    {
        x =   b * 5.00 ;
        printf("Total: R$ %.2lf\n", x);

    }if (a == 4)
    {
        x =   b * 2.00 ;
        printf("Total: R$ %.2lf\n", x);

    }if (a == 5)
    {
        x =   b * 1.50 ;
        printf("Total: R$ %.2lf\n", x);

    }











    return 0;
}

