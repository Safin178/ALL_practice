#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long r, o;
    scanf("%lld%lld", &r, &o);

    o = o *6*6;

    if(o >= r)
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