#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, b, j, sum, p =0, q = 0, k;
    scanf("%d", &n);
    int c[n];
    for(i = 1, j = 1; i <= n; i++, j*= 2)
    {
        scanf("%d", &b);
        c[i] = b *j;

    }
    for(i  = 1; i <= n ; i++)
    {
        for(j = i; j <= n; j++)
        {
             sum = 0;
            for(k = i ; k <= j; k++)
            {
                sum += c[k];
            }
           if(sum > 0)
            {
                p++;
            }
            else if(sum < 0)
            {
                q++;
            }
        }
        
    }
    
    

    printf("%d\n", abs(p - q));
   
    
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