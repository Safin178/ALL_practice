#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , i; 
    scanf("%d", &n);
    int arr[n];
    int feq[1000] = { };
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        feq[arr[i]]++;
    }
    int max = INT_MIN;
    for( i = 0 ; i < 101 ; i++)
    {
        if(max <= feq[i])
        {
            max = feq[i];
        }
    }
    printf("%d", max);


    
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