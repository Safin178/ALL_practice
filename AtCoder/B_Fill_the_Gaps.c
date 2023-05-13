#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i,j;
    for(i = 0 ; i <n; i++)
    {
        scanf("%d", &a[i]);

    }
    for(i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1] && a[i]-a[i+1] != 1)
        {
            for(j = a[i]; j > a[i+1]; j--)
            {
                printf("%d ", j);
            }
        }
        else if(a[i] < a[i+1] && a[i+1]-a[i] != 1)
        {
            for(j = a[i]; j < a[i+1]; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    printf("%d\n", a[n-1]);

    
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