#include <stdio.h>
int main()
{
    /*


    */
    long long n, m;
    scanf("%lld%lld", &n, &m);
    long long i, j;
    long long a[n][m], b[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &b[i][j]);
             printf("%lld ", (a[i][j] + b[i][j]));
        }
        printf("\n");
    }

   

    return 0;
}