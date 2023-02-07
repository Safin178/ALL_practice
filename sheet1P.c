#include<stdio.h>
int main()
{
    int a, x;
    scanf("%d", &a);
    x = a / 1000;
    if (x % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}


