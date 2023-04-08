#include<stdio.h>
int main()
{
    int a;
    float x;
    double s;
    scanf("%f",&x);
    a = x / 1;
    s= x - a;

    if (s == 0)
    {
        printf("int %d\n",a);
    }
    else
    {
        printf("float %d %.3lf\n",a,s);
    }
    return 0;
}