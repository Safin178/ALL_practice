#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , x, k, i, sum = 0;
    scanf("%d %d", &n, &x);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if(k >= x)
        {
            sum++;
        }
    }
    printf("%d\n", sum);

    
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