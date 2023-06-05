#include<stdio.h>
double oddcheck(int x, int y)
{
    if(x % 2 == 0 && y % 2 == 0)//both are even
    {
        return 2.0;
    }
    else if( x % 2 != 0 && y % 2 != 0)//both are odd
    {
        return 1.1;
    }
    else// only one number is odd
    {
        return 0.1;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double r;
    r = oddcheck(a, b);
    printf("%.1lf", r);
    return 0;
}
