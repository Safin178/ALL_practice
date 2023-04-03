#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    long long int m ,sum, i;
    scanf("%lld",&m);

    long long int arr[m];
    sum = 0;
    for( i = 0; i < m; i++)
    {
        scanf("%lld", &arr[i]);
        if(arr[i] > 10)
        {
            sum += (arr[i] - 10);
        }
    }
    
          printf("%lld\n", sum);
    
  


    
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