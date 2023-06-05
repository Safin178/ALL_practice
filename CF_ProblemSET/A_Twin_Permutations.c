#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int b =1, temp, j, k;
    for(i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
        
    }
     for(i = 0; i< n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            for(j = i; j <n; j++)
            {
                for(k = i; k<n;k++)
                {
                    if(a[j] > a[k])
                    {
                        temp =a[j];
                        a[j] =a[k];
                        a[k] =a[j];
                    }
                }
            }
            break;
        }
        
    }
    for(i = 0; i< n; i++)
    {
        printf("%d ", a[i]);
    }
    

    printf("\n");



    
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