#include<stdio.h>
int main()
{
    double a ;

    scanf("%lf", &a);

    if ((a < 0.00) || (a > 100.00))
    {
        printf("Fora de intervalo\n");
    }
    else if (a <= 25.00)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(a <= 50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(a <= 75.00)
    {
        printf("Intervalo (50,75]\n");

    }
    else
    {
        printf("Intervalo (75,100]\n");
    }




    return 0;
}
