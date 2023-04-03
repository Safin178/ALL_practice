#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, x;
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &x);
        if(x % 2 == 0)
        {
            if((x % 3 != 0) && (x % 5 != 0))
            {
                printf("DENIED\n");
                return ;
            }
        }
    }

    printf("APPROVED\n");
    
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