#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, sum = 0, dish;
    scanf("%d", &n);

    int a[100], b[100], c[100];
    c[0] = 0;
   
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i = 1; i<= n-1; i++)
    {
        scanf("%d", &c[i]);
    }

    for(i = 1 ; i <= n; i++)
    {
        sum += b[a[i]];
        if(i > 1)
        {
            if(a[i] - a[i-1] == 1)
            {
                sum = sum + c[a[i]-1];
            }
        }



        



        
       
    }
   
    
    printf("%d", sum);
    


    
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