#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
long long a , b, c;
scanf("%lld %lld %lld", &a, &b, &c);

        for(int  i = a; i <= b ; i++)
        {
            if(i % c == 0)
            {
                printf("%d\n", i);
                return;
            }
        }
        printf("-1\n");
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