#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int x;
    scanf("%d", &x);
    int ar[x];
    int m = INT_MAX;
    int sum = 0;
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
        if(m > ar[i])
        {
            m = ar[i];
        }
        sum += ar[i];
    }

    sum = sum - m;

    if(x % 2 == 0)
    {
            if(sum % 2 != 0)
        {
            printf("CHEF\n");
        }
        else{
            printf("CHEFINA\n");
        }
    }
    else{
          if(sum % 2 != 0)
        {
            printf("CHEFINA\n");
        }
        else{
            printf("CHEF\n");
        }
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