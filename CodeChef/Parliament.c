#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    double ans ;

    ans = a / 2.0;
    ans = ceil(ans);

    if((int)ans <= b)
    {
        printf("YES\n");
    }
    else
    {
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