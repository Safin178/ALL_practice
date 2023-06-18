#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int l;
    scanf("%d", &l);
    int p = 0, n =  0,i, x, t;
    for( i =  0; i < l ;  i++)
    {
        scanf("%d", &x);
        if(x > 0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }
    if(p == n && n % 2 ==0)
    {
        printf("0\n");
    }
    else if(p == n && n % 2 !=0)
    {
        printf("1\n");
    }
    else if(p > n && n % 2 == 0)
    {
        printf("0\n");
    }
    else if(p > n && n % 2 != 0)
    {
        printf("0\n");
    }
    else if(p < n)
    {
        t = n - p;
        t--;
        if((n - t) % 2 != 0){t++;}
        printf("%d\n", t);
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