#include<stdio.h>
int main()
{
    /*
f digit sum jeta every loop 0 hoite hobe tai f bitore;
i ,n normal loop;;




    */
    int n , a, b, i,r, f, x, sum = 0;
    scanf("%d%d%d", &n, &a, &b);
    for (i = 1; i <= n; i++)
    {
                x = i;
                f = 0;
            while(x > 0)//digit alada korar jonno
            {
                r = x % 10;
                f += r;//digit sum f
                x = x / 10;
            }
                if ((a <= f) && (f <= b) )
                {

                    sum += i;
                }
    }

    printf("%d\n", sum);









    return 0;
}
