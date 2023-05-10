#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int y;
    scanf("%d", &y);
    int ans = 1;
    if(y == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("%d\n", y * 3);
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