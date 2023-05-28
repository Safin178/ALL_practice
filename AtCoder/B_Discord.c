#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m],i,j,sum=0;
    int f[50][50];
     for(i = 0; i< n; i++)
    {
        for(j = 0; j< n; j++)
        {
            f[i][j]=1;
            
        }
    }
    for(i = 0; i< n; i++)
    {
        for(j = 0; j< m; j++)
        {
            scanf("%d", &a[i][j]);
            
            
        }
    }
    for(i = 0; i< n; i++)
    {
        for(j = 0; j< m; j++)
        {
            
            
                 f[a[i][j+1]][a[i][j]]=0;
            
                 f[a[i][j]][a[i][j+1]]=0;
            
           
            
        }
    }
    
    for(i = 1; i< n; i++)
    {
        for(j = 1; j< n; j++)
        {
            if(i == j)continue;
            if(f[i][j] == 1)
            {
                printf("%d %d\n", i, j);
            }
            sum+=f[i][j];
            
        }
    }
    printf("%d\n", sum);




    
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