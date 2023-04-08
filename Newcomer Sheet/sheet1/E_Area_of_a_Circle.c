#include<stdio.h>
#define PI 3.141592653
int main()
{
    double r,x;
    scanf("%lf", &r);
    x = PI * r * r;
    printf("%.9lf", x);
    return 0;
}