#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , m, i, j;
    scanf("%d%d", &n, &m);
    char s[105][105];

     for(i = 0; i < n; i++)
    {
        scanf(" %s ", &s[i]);
        for(j = 0; j < m-1;j++)
        {
              if(s[i][j] == 'T' && s[i][j+1] == 'T')
            {
                s[i][j] = 'P';
                s[i][j+1]= 'C';
            }
            
        }
        printf("%s\n", s[i]);
    }
    // for(i = 1; i <= n; i++)
    // {
    //     for(j = 1; j <= m-1;j++)
    //     {
    //         if(s[i][j] == 'T' && s[i][j+1] == 'T')
    //         {
    //             s[i][j] = 'P';
    //             s[i][j+1]= 'C';
    //         }
    //     }
    // }
    //  for(i = 1; i <= n; i++)
    // {
    //     for(j = 1; j <= m;j++)
    //     {
    //         printf("%c", s[i][j]);
            
    //     }
    //     printf("\n");
            
        
    //

    
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