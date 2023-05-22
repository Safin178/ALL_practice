#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long n;
    long long x, y, z, ans=0;
    scanf("%lld", &n);
    
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <=n; y++)
        {
            for(z =1; z<=n; z++)
            if((x*y) <= n && (y*z)<= n &&(z*x) <= n )
            {
                ans++;
            }
        }
    }
    printf("%d\n",ans%998244353);


    
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