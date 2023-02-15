#include<stdio.h>
int main()
{
    double a , b, c, x;
    scanf("%lf%lf%lf", &a, &b, &c);
    x = (((a * 2) + (b * 3)+(c * 5)) / 10);

    printf("MEDIA = %.1lf", x);


    return 0;
}


