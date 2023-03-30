#include <stdio.h>

void repeat(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d\n", n);
    return;
}

int main()
{

    int x;
    scanf("%d", &x);
    repeat(x);

    return 0;
}