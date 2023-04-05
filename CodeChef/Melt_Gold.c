#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n , x, i, sum = 0, ans =0;

    scanf("%lld %lld", &n, &x);
    for(i = 1; x < n; i++)
    {
        x += i;
        ans++;

    }
   printf("%lld\n", ans);

    
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