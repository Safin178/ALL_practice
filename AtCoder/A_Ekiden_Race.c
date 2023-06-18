#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], cnt = 0, ncnt = 0;
    int i, x, max =INT_MAX;
    for(i = 1; i <= n ; i++)
    {
        scanf("%d", &a[i]);
        x = a[i] - i;
       // printf("%d ", x);
        if(x <= max)
        {
            max = x;
        }
        if(x <= 0)
        {
            cnt++;
        }
        if(x == 0)
        {
            ncnt++;
        }

    }
   if(max < 0) 
    printf("%d\n", cnt-ncnt);
   else 
    printf("%d\n", ncnt);

    
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