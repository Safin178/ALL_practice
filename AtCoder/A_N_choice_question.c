#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , a, b;

    scanf("%d%d%d", &n ,&a, &b);
    int c[n];

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &c[i]);
        if(c[i] == (a + b))
        {
            printf("%d\n", i);
            break;
        }
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