#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n , m, i, j ;
        scanf("%d %d", &n, &m);

        int arr[n+1][m+1];
        for(i = 1; i <= n; i++)
        {
            int row_sum = 0;
            for(j = 1 ; j <= m; j++)
            {
                scanf("%d",&arr[i][j]);

                row_sum += arr[i][j];
            }
            printf("row %d: %d\n", i, row_sum);
        }
         for(j = 1; j <= m; j++)
        {
            int col_sum = 0;
            for(i = 1 ; i <= n; i++)
            {
                col_sum += arr[i][j];
            }
            printf("col %d: %d\n", j, col_sum);
        }
        printf("\n");
    }
}