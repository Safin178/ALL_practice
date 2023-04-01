#include <stdio.h>
int main()
{
    /*


    */
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    int t, n, i, j, cnt = 0, x, f;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        cnt = 0;
        for (i = 0; i < n; i++)
        {

            for (j = i; j < n; j++)
            {
                f = 0;
                for (x = i; x < j; x++)
                {
                    if (a[x] > a[x + 1])
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}