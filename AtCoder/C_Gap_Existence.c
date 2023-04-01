#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n , x, i, j;
    scanf("%lld%lld", &n, &x);
    long long int a[n];
    for(i = 0 ; i < n; i++)
    {
        scanf("%lld", &a[i]);

    }
    for( i= 0 ; i< n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if((a[i] - a[j]  )== x)
            {
                printf("Yes\n");
                return;
            }
        }
    }

    printf("No\n");

    
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