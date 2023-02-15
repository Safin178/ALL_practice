#include<stdio.h>
int main()
{
    double a , x;
    scanf("%lf", &a);
    if (a > 4500.00)
    {
        x = (( 0.28 * (a - 4500 )) + (1500 * 0.18) + (1000 * 0.08));
        printf("R$ %.2lf\n", x);
    }
    else if ((a <= 4500.00) && (a > 3000.00))
    {
        x = (( 0.18 * (a - 3000.00)) + (1000.00 * 0.08));
        printf("R$ %.2lf\n", x);
    }
    else if ((a <= 3000.00) && (a > 2000.00))
    {
        x = ((a - 2000.00) * 0.08 );
        printf("R$ %.2lf\n", x);
    }
      else if (a <= 2000.00)
    {
        printf("Isento\n");
    }


    return 0;
}


