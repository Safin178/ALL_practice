#include <stdio.h>
int main()
{
    /*


    */
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    int n;
    scanf("%d", &n);
    int ar[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ar[i][j] != ar[j][i])
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");

    return 0;
}