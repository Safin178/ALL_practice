#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], b[n], i;
    int feqa[100] = {0};
    int feqb[100] = {0};
    for(i = 0 ; i < n; i++)
    {
        scanf("%d" ,&a[i]);
        feqa[a[i]]++;
    }
      for(i = 0 ; i < n; i++)
    {
        scanf("%d" ,&b[i]);
        feqb[b[i]]++;
    }
    int count = 0;
      for(i = 1 ; i <= 100; i++)
    {
        if(feqa[i] != 0 && feqb[i] != 0)
        {
            if(feqa[i] >= feqb[i])
            {
                count += feqb[i];
            }
            else
            {
                count += feqa[i];
            }
        }
    }

    printf("%d", count);



    
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