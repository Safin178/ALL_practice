#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , m;
    scanf("%d%d", &n,&m);
    int a[n], b[m], p[m];
    int i, j;
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for( i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int k = 0, f;
   for( i =0 ; i < m ; i++)
   {
        f = 0;
        for( j= 0 ; j < n; j++)
        {
            if(b[i] == a[j])
            {
                a[j] =-1;
                p[k]=j;
                k++;
                f =1;break;
            }
        }
        if(f == 0)
        {
            printf("NO\n");
            return;
        }
     
   }
   for(k = 1; k < m; k++)
   {
        if(p[k-1] > p[k])
        {
            printf("NO\n");
            return;
        
        }
   }
    printf("YES\n");


    
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