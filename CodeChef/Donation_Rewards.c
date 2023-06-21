#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int a,b;
    scanf("%lld", &a);
    if(a <= 3)
    {
        printf("BRONZE\n");
    }
    else if(a <= 6)
    {
        printf("SILVER\n");
    }
    else
    {
        printf("GOLD\n");
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