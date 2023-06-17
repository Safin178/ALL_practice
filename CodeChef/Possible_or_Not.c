#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
     int n, b;
    scanf("%d%d", &n, &b);
    int a[n];
    int  i, cnt = 0,j;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i <n; i++)
    {
        for(j = 0;j < n; j++)
        {
            if((a[i] & a[j]) == b)
            {
                printf("YES\n");
                return;
            }
        }
    }
    printf("NO\n");

    
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