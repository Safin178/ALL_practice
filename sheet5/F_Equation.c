#include <stdio.h>
long long power(int x, int n)
{
    long long sum = 1, i;
    for (i = 1; i <= n; i++)
    {
        sum *= x;
    }
    return sum;
}
void result(int x, int n)
{
    long long sum = 0, i;
    for (i = 2; i <= n; i += 2)
    {
        sum += power(x, i);
    }
    printf("%lld\n", sum);
}

int main()
{
    int x, n;

    scanf("%d %d", &x, &n);

    result(x, n);

    return 0;
}