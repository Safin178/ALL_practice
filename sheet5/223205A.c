#include<stdio.h>

int sum(int x, int y)
{
    int sm = x + y;
    return sm;

}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = sum(a,b);
    printf("%d\n", ans);
}