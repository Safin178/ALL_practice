#include<stdio.h>
int main()
{
    int a, i;
    float x, y, z, b;
    scanf("%d", &a);
    i = 0;
    while(i < a)
    {
        scanf("%f%f%f", &x, &y, &z);
        b = ((x * 2) + (y * 3) + ( z * 5)) / 10;
        printf("%.1f\n", b);
        i++;
    }
    return 0;
}


