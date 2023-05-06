#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, j= 0;
    scanf("%d", &n);
    int a[n];
    int ans = INT_MIN;
    int b[100]= {0};
    for( i = 0; i  <n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0)
        {
            b[j]++;
        }
        if(a[i] == 1)
        {
            j++;
        }
    }
    for(j= 0; j<n; j++)
    {
        if(ans < b[j])
        {
            ans = b[j];
        }
    }
    printf("%d\n", ans);

    
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