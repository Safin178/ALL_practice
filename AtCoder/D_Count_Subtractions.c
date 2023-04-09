#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long a, b, cnt= 0;

    scanf("%lld%lld", &a, &b);

    while(a != b)
    {
        if(a > b)
        {
            a = a- b;
        }
        else{
            b = b - a;
        }
        cnt++;
    }

    printf("%lld", cnt);
    
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