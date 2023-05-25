#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int x ,k;
    scanf("%d%d", &x, &k);
    if(x % k != 0)
    {
        printf("1\n%d\n",x);
        return;
    }
    else
    {
        printf("2\n%d %d\n", x-1,1);
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