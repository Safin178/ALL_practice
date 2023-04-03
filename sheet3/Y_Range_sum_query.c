#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    //loop diye korte partam but prefix sum practice...

    //https://youtu.be/7pJo_rM0z_s 
    int n , m, i;
    scanf("%d%d", &n,&m);
    int arr[n+1];
    int feq[n+1];
    feq[0] = 0;
    for(i = 1 ; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        feq[i] = arr[i] + feq[i - 1];

    }
    int x, y, ans;
    for(i = 1 ; i <= m ; i++)
    {
        scanf("%d%d", &x, &y);
        ans = feq[y] - feq[x-1];
        printf("%d\n", ans);

    }


    
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