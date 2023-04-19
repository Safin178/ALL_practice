#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int b, cnt = 0;
    scanf("%d", &b);
    while(b != 50)
    {
        if(b > 50)
        {
            b = b -3;
        }
        else{
            b = b +2;
        }
        cnt++;
    }

    printf("%d\n", cnt);

    
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