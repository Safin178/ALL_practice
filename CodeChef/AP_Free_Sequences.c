#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], i, j, k;
    for(i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j< n; j++)
        {
            for(k = j+1; k< n; k++)
            {
                if(a[j]- a[i] == a[k]- a[j])
                {
                    printf("No\n");
                    return;
                }
            }
        }
    }
    printf("Yes\n");

    
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