#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve()
{
    int n ,m, i, j;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(i = 0; i< n ; i++)
    {
        for(j = 0; j < m ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x , y;
    scanf("%d%d", &x, &y);
    int b[x][y];
    for(i = 0; i< x ; i++)
    {
        for(j = 0; j < y ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(n == x && m == y)
    {
    
        for(i = 0; i< x ; i++)
        {
            for(j = 0; j < y ; j++)
            {
                if(a[i][j] != b[i][j])
                {
                    printf("NO\n");
                    return;
                }
            }
        }
        printf("YES\n");
            
    }
    else {printf("NO\n");}

    
}

int main()
{
    int t = 1;
    scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}