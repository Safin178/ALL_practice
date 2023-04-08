#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    if ((a >= b) && (a >= c))
    {
        if (b > c)//a b c
        {
            printf("%d %d\n",c, a );
        }
        else //a c b
        {
            printf("%d %d\n", b, a );
        }
    }
    else if ((b >= c) && (b >= a))
    {
          if (a > c)//b a c
        {
            printf("%d %d\n", c , b );
        }
        else //b c a
        {
            printf("%d %d\n", a, b );
        }
    }
    else
    {
        if (b > a) // c b a
        {
            printf("%d %d\n", a, c );
        }
        else//  c a b
        {
            printf("%d %d\n", b , c );
        }
    }
    return 0;
}