#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
long long a , b, c;
scanf("%lld %lld %lld", &a, &b, &c);

if(a*a + b*b < c*c)
{
    printf("Yes\n");
}
else
{
    printf("No\n");
}
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