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
    if(a == b)
    {
        sum = a * b;
        if(sum == 0)
        {
            printf("Zero\n");
        }
        else if(sum > 0)
        {
            printf("Positive\n");
        }
        else{
            printf("Negative\n");
        }
    }
    else{
         
            for( i = a ; i <= b; i++)
            {
                sum *= i;
            }
            if(sum  == 0)
                {
                    printf("Zero\n");
                }
                else if(sum >0)
                {
                    printf("Positive\n");
                }
                else{
                    printf("Negative\n");
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