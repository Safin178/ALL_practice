
#include<stdio.h>
int main()
{
    /*


    */
        int a , b, i, ans = 0,a1,b1, j, t;
        scanf("%d",&t);
        for (j = 1; j <= t; j++)
        {
            scanf("%d%d", &a, &b);


            if (a <= b)
            {
                    a1 = b;
                    b1 = a;
                 for (i = b1 + 1, ans = 0 ; i < a1; i++)
                {
                    if(i % 2 != 0)
                    {
                        ans += i;
                    }
                }
                printf("%d\n", ans);
            }
            else if (a > b)
            {

                for (i = b + 1,ans = 0 ; i < a; i++)
                {
                    if(i % 2 != 0)
                    {
                        ans += i;
                    }
                }
                printf("%d\n", ans);
            }
        }
    return 0;
}
