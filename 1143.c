#include<stdio.h>
int main()
{
    int a, i, x, y, z;
    scanf("%d", &a);
    i = 1;
    while (i <= a)
    {
        x = i;
        y = i * i;
        z = i * i * i;
        printf("%d %d %d\n", x, y, z);
        i++;

    }
    return 0;
}


