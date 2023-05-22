#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int a, b, d;
    scanf("%lld%lld%lld", &a, &b, &d);
    long long aoki[a];
    long long toki[b];
    long long i, j, sum =-1, t;
    for(i =0 ; i< a; i++)
    {
        scanf("%lld", &aoki[i]);
    }
     for(i =0 ; i< b; i++)
    {
        scanf("%lld", &toki[i]);
    }
       for(i =0 ; i< a; i++)
    {
        for(j=0 ; j< b;j++)
        {
            if(abs(aoki[i] - toki[j]) <= d)
            {
                t = aoki[i]+toki[j];
                if(t > sum)
                {
                    sum = t;
                }
            }
        }
    }
    printf("%lld", sum);
 
 




    
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