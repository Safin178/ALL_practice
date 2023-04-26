#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int x, l;
    scanf("%lld", &x);
    if(x == 1) {printf("-1\n");}
    else if(x == 2){printf("1 1 1\n");}
    else if( x % 2 == 0)
    {
        l = x - 2;
        printf("2 %lld %lld\n",  l/2, x - l);
    }
    else{
         l = x - 1;
         printf("2 %lld %lld\n", l/2, x -l);
        //printf("%d %d %d\n", 2, l/2, x - l);
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