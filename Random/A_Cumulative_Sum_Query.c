#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n+1], b[n+1],i;
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        b[i] = sum;
    }
    int j , k, l;
    scanf("%d", &l);
      for(i = 0; i < l; i++)
    {
        scanf("%d%d", &j, &k);
        if(j != 0 || k != 0)
        printf("%d\n", b[k] - b[j-1]);

        else
            printf("%d\n", b[k] );

            

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