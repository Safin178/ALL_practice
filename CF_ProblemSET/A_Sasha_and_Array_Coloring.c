#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], i,t,j, sum = 0;
    for(i = 0 ;  i < n;i++)
    {
        scanf("%d", &a[i]);
      
    }
    
        for(i = 0; i < n ;i++)
        {
            for( j = 0; j <n;j++)
            {
                if(a[i] < a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        
        for( i = 0 ;  i < n/2; i++)
            sum += (a[n-1-i] -a[i]);

        printf("%d\n", sum);
    

    
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