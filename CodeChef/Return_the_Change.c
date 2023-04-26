#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
   int x;
   int ans;
    scanf("%d", &x);

    int l = x % 10;
    int m = x / 10;

    if(l > 4)
    {
        ans = (m+1) * 10;
    }
    else
    {
        ans = x - l;
    }


    printf("%d\n",100- ans);


    
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