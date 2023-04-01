#include<stdio.h>

void solve(void)
{
    int n, m, i , j, cnt0 = 0, cnt1 = 0;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for(i = 0; i  <n ; i++)
    {
        for(j =0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0)
            {
                cnt0++;
            }
            else cnt1++;
        }
    }
    
    if(cnt0 > cnt1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }
    return 0;
}