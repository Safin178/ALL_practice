#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, s;
    scanf("%d%d", &n, &s);// second hocce s

    int a[n+1];
    int b[n+1];
    int i;
    int have, ans, f= 0;
    have = s;
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }
    ans = 1;
    for(i =1; i <= n; i++)
    {
        if((a[i]  <= have) && (b[ans] < b[i]))
        {
            
            
            ans = i;
            f = 1;  
            
        }
        have--;
    }
    if(f)
    {
        printf("%d\n", ans);
    }
    else{
        printf("-1\n"); 
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