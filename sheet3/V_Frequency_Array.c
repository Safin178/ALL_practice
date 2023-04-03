#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , m, i;//ei approach ta te jamela 1 to m bole dise tai parsi naile https://www.youtube.com/watch?v=jKFsTTctXF0..

    scanf("%d%d", &n, &m);
    int arr[n];
    int feq[100000] = {};

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        feq[arr[i]]++;

    }
    for(i = 1; i <= m; i++)
    {
        printf("%d\n", feq[i]);
    }





    
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