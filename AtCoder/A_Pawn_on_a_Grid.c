#include<stdio.h>
int main()
{
    /*
    
    https://atcoder.jp/contests/abc280/tasks/abc280_a
    */
    int m , n, i, j, ans = 0;
    scanf("%d%d", &m ,&n);
    
    char arr[m][n];
    
    for(i = 0 ;i < m; i++)
    {
        for(j = 0 ; j < n; j++)
        {
            scanf(" %c", &arr[i][j]);
            if(arr[i][j] == '#')
            {
                ans++;
            }
        }
    }
    
    printf("%d", ans);
    
    
    
    
    
    return 0;
}