#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int p , q , r, s, f = 0;;
    scanf("%d%d%d%d", &p, &q, &r, &s);
    if(p > (q+r+s))
    {
        f = 1;
    }
    else if(q > (p  +r + s))
    {
        f = 1;
    }
    else if(r > (p + q+ s))
    {
        f = 1;
    }
    else if(s > (p+ q+ r))
    {
        f = 1;
    }

    if( f == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
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