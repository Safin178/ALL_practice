#include<stdio.h>
int factors(int x)
{
    int sum = 0, i;
    for ( i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d", &a);

    int r = factors(a);
    printf("%d", r);
    return 0;
}
