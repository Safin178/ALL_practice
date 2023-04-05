#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n , x, k, f = 2, i;
     scanf("%lld%lld", &n, &x);
    for(i = 0; i <n; i++)
    {
        scanf("%1lld", &k);

       if(f)
       {
         if(k < x)
        {
            printf("%lld", x);
            f = 0;
        }
       }
        printf("%lld",k);

    }
    if(f == 2)
    {
        printf("%lld", x);
    }
    printf("\n");


    
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