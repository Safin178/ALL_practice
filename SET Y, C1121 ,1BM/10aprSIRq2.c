#include<stdio.h>
int main()
{
    int n , m, i, j, row, col, sumrow= 0, sumcol = 0;
    scanf("%d%d", &n, &m);

    int arr[n][m];

    for( i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j <  m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    scanf("%d%d", &row, &col);
    row = row - 1;
    col = col - 1;

    for(j = 0; j < m; j++)
    {

        sumrow += arr[row][j];
    }
    for(i = 0; i < n; i++)
    {

        sumcol += arr[i][col];
    }
    printf("sum of row = %d\n", sumrow);
    printf("sum of column = %d\n", sumcol);



    return 0;
}
