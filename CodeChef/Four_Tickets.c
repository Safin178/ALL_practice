#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long x;
    scanf("%lld", &x);
    x = x *4;

    if(x > 1000)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
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