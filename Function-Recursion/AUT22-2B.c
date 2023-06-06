#include <stdio.h>
int F(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else
    {
        return F(n-1, k-1) + F(n-1, k);
    }
}
int main()
{
    int n, k;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &k);
    int result = F(n, k);
    printf("Result: %d\n", result);
    return 0;
}
