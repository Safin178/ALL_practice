#include<stdio.h>
int main()
{
   long long int a, b, c;
    scanf ("%lld%lld%lld", &a, &b, &c);
    if ((a >= b) && (a >= c))
    {
        if(b >= c)
        {
            printf ("%lld\n%lld\n%lld\n",c, b, a );
        }
        else if (b < c)
        {
           printf ("%lld\n%lld\n%lld\n", b, c, a );
        }
    }
    else if(b >= c)
    {
        if (a >= c)
        {
            printf("%lld\n%lld\n%lld\n", c , a ,b);
        }
        else if (a < c)
        {
            printf("%lld\n%lld\n%lld\n", a , c ,b);
        }
    }
        else if(b < c)
    {
        if (a >= b)
        {
            printf("%lld\n%lld\n%lld\n", b , a , c);
        }
        else if (a < b)
        {
            printf("%lld\n%lld\n%lld\n", a , b ,c);
        }
    }
    printf("\n");
    printf("%lld\n%lld\n%lld\n", a , b ,c);

    return 0;
}