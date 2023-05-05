#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], ans = 0;
    int f[105] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }
     for(int i = 0; i < 101; i++)
    {
        if(f[i] >=2)
        {
            ans += (f[i] / 2);
        }
        
    }
    printf("%d\n", ans);


    
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