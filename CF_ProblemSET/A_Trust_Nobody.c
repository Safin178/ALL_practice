#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n ; 
    scanf("%d", &n);

    int a[n];
    int b[100]={0};
    int i,  mi = INT_MAX, ans = INT_MAX;
    int ans2 = 0, f = 0, c=0;
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] != 0)
        {
            f = 1;
        }
        
        b[a[i]]++;
        if(a[i] < mi)
        {
            mi = a[i];
        }

    }
    for(i = 0; i < 100; i++)
    {
        if(b[i] == 0) continue;
        
        if(b[i] <= ans)
        {
            ans = b[i];
        }
        ans2 += b[i];
        if(b[i] > 0)
        {
            c++;
        }
        
    }
    
   

    if(c == 1 && f == 1)
    printf("-1\n");

    else 
    {
        printf("%d\n", ans2 - ans);
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