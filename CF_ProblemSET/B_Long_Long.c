#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n;
    scanf("%lld", &n);
    long long  a[n], f = 1, k=0, l=0;
    long long int i, sum= 0,cnt =0;
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += abs(a[i]);
        if(a[i] < 0)
        {
            l = 1;
        }
        if(a[i]>0 && l == 1)
        {
            cnt++;
            l=0;
        }
       
    }
    if(l == 1)cnt++;
    printf("%lld %lld\n", sum, cnt);

    
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