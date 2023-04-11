#include <stdio.h>
int main()
{
    /*


    */
    long long n, m;
    scanf("%lld%lld", &n, &m);
    long long i, j;
    long long a[n][m], b[m][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
   for (i = 0; i < m; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("%d\n", b[i][n-1]);
    }



    return 0;
}
