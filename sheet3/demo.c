#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , m;
    scanf("%d%d", &n,&m);
    int a[n], b[m];
    int i, j;
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for( i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int k = 0;
    for( i = 0; i < m; i++)
    {
        for(j = k; j < n; j++)
        {
            if(a[j] == b[i])
            {
                k = j;
                b[i] = -1;
                break;

            }
        }
    }
    for( i = 0; i < m; i++)
    {
        if(b[i] != -1)
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");



    
}

int main()
{
    int t = 1;
    //scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}