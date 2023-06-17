#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>


void solve(void)
{
    unsigned long long sum = 0; 
    int n, i;
    for(i = 0; i < 64; i++)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            sum = sum + (n << i);
        }
    }
    
   
    //printf("%lld\n",sum);
    printf("%llu\n",sum);

    
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