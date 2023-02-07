#include<stdio.h>
int main()
{
   long long int a, i ,b,x,j;
    scanf("%lld", &a);
    for (i = 1; i <= a;i++)
    {
        scanf("%lld",&b);
        for(j = 1 , x = 1; j <= b; j++)
        {
            x *= j;
        }
        printf("%lld\n", x);
    }
    return 0;
}

