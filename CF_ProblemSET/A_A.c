#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int l , b;
    scanf("%d%d", &l, &b);
    int t = 0;
    while( l <= b)
    {
        l  = l * 3;
        b = b* 2;
        t++;
    }

    printf("%d", t);
    
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