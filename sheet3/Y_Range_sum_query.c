#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    //loop diye korte partam but prefix sum practice...

    //https://youtu.be/7pJo_rM0z_s 
    long long int n , m, i;
    scanf("%lld%lld", &n,&m);
    long long int arr[n+1];
    long long int feq[n+1];
    
    for(i = 1 ; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    feq[1] = arr[1];
    feq[0] = 0;
    for(i = 2 ; i <= n; i++)
    {
        
        feq[i] = arr[i] + feq[i - 1];

    }
    

    long long int x, y, ans;
    for(i = 1 ; i <= m ; i++)
    {
        scanf("%lld%lld", &x, &y);
        ans = feq[y] - feq[x - 1];
        printf("%lld\n", ans);

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