#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[200001];
    scanf(" %s ", s);
    int n = strlen(s);
    int ans = 0;
    int i;
   if(n % 2 == 0)
   {
     
        for(i = 0 ; i < n ; i++)
        {
            if(i % 2 == 0)
            {
                if(s[i] != s[i+1])
                {
                    ans++;
                    s[i+1]='0';
                }
            }
        }
   }
   else
   {
     
        for(i = 0 ; i < n ; i++)
        {
            if(i % 2 == 0)
            {
                if(s[i] != s[i+1])
                {
                    ans++;
                    s[i+1]='0';
                }
            }
        }
   }
    printf("%d %d\n%s\n", ans, n, s);

    
}

int main()
{
    int t = 1;
    scanf("%d ", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}