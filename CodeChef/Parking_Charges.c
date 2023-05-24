#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int x , y, h;
    scanf("%d%d%d", &x, &y, &h);
    int ans = 0;

    if(h>0)
    {
        ans = x+((h-1) * y);
        printf("%d\n", ans);
    }
    else{
        printf("0\n");
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