#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int a , b,i;

    long long int sum = 1;
    scanf("%lld%lld", &a, &b);
    if (a > 0 && b > 0)
    {
        printf("Positive\n");
    }
    if(a <= 0 && b >= 0)
    {
        printf("Zero\n");
    }
    if(a < 0 && b < 0)
    {
        sum = b - a;
        if(sum % 2 == 0)
        {
            printf("Negative");
        }
        else 
        {
            printf("Positive\n");
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