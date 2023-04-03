#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int n , m, sum, i;
    scanf("%lld%lld",&n, &m );

    long long int arr[m];
    sum = 0;
    for( i = 0; i < m; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    sum = n - sum;
    if (sum  <0)
    {
        printf("-1");
    }
    else
    {
          printf("%lld\n", sum);
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