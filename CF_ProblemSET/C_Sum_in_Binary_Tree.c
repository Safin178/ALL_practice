#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n;
    scanf("%lld", &n);
    long long sum = 0;

    while(n  >0)
    {
        sum += n;
        n /= 2;
    }
    printf("%lld\n", sum);


    
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