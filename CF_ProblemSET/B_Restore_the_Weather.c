#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    int b[n];
    int ans[n];
    int i, max = INT_MIN, j, temp, pos;
    for(i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }
      for(i = 0; i< n; i++)
    {
        scanf("%d", &b[i]);
    }
      for(i = 0; i< n; i++)
      {
        max = INT_MIN;
        for(j = i; j < n; j++)
        {

            if(abs(a[i] - b[j]) <= k)
            {
                if(max <abs(a[i]- b[j]))
                {
                    max = abs(a[i]- b[j]);
                    pos = j;
                    
                    
                }
                 
            }
             temp = b[i];
                    b[i] = b[pos];
                    b[pos] = temp;
        }
        printf("%d ", b[i]);
      }
        printf("\n");

    
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