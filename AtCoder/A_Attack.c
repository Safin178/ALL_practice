#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long x , y;
    scanf("%lld%lld", &x, &y);
   long long ans = (x/y);
   if(x % y != 0)
   {
        ans++;
   }
    printf("%lld", ans);
    
    
    
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