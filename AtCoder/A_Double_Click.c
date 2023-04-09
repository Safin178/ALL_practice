#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, d, i;
    scanf("%d%d", &n, &d);
    int arr[n];
    for(i = 0; i  <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        if(arr[i+1] - arr[i] <= d)
        {
            printf("%d", arr[i+1]);
            return;
        }
    }

    printf("-1");
    
    

    
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