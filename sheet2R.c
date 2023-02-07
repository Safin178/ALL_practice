#include<stdio.h>
int main()
{
    /*


    */
        int a , b, i, ans = 0,a1,b1;
        while(1)
        {
            scanf("%d%d", &a, &b);
            if ((a <= 0) || (b <= 0))
            {
                break;
            }
            if (a <= b)
            {
                    a1 = b;
                    b1 = a;
                 for (i = b1, ans = 0 ; i <= a1; i++)
                {
                    ans += i;
                    printf("%d ", i);
                }
                printf("sum =%d\n", ans);
            }
            else if (a > b)
            {

                for (i = b,ans = 0 ; i <= a; i++)
                {
                    ans += i;
                    printf("%d ", i);
                }
                printf("sum =%d\n", ans);
            }
        }
    return 0;
}
