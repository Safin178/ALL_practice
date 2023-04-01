#include<stdio.h>


long long prime(long long x)
{
    if(x == 1)
    {
        return 0;
       
    }
   long long  i;
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    long long n, q, f;
    scanf("%lld", &n);
    int j;
    for(j = 0 ; j < n;j++)
    {
        scanf("%lld", &q);
        f = prime(q);
        if(f)
        {
            printf("YES\n");

        }
        else printf("NO\n");
    }



    return 0;
}