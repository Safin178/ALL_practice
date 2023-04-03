#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int a , b;
    int c , d;
    int x , y;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a >= b)
    {
        x = a;
    }
    else{
        x = b;
    }
    if(c <= d)
    {
        y = c;
    }
    else 
    {
        y = d;
    }

    printf("%d\n", x - y);
    
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