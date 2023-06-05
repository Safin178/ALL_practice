#include<stdio.h>

//slightly  similar like Aut22-2C
int divisorcheck(int x, int y)
{
    if( y % x == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int r;
    r = divisorcheck(a, b);
    if( r == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
