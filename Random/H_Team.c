#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, cnt = 0, a, b, c;
    scanf("%d", &n);

    for(i = 0 ; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if((a+b == 2) || (b + c == 2) || (c + a == 2)) cnt++;
    }
    printf("%d\n", cnt);    
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