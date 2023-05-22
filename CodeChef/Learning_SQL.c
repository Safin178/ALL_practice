#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a,&b,&c);
    long long ans = (a+c)*b;
    printf("%lld\n", ans);


    
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