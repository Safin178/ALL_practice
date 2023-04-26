#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long x, y;
    scanf("%lld%lld", &x, &y);

    if(((x*x) - 2 * y) == 0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    
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