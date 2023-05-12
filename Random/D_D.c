#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;
    int arr[n];
    int f[200001] ={0};
    int i ;
    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &arr[i]);
        f[arr[i]]++;
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    for(i = 0; i <= max; i++)
    {
        if(f[i] >= 3)
        {
            printf("%d\n", i);
            return;
        }
    }
    printf("-1\n");


    
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