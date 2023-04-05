#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
      char s[1000000], new[1000000];
        scanf(" %s ", s);
        int i , j, x, ans=1, ans2=1;
        int n = strlen(s);
        for(i = 0; i < n ; i++)
        {
            for(j = i ; j < n; j++)
            {
                ans=1; ans2=1;
                for(x = i ; x < j; x++)
                {
                    
                    strcat(new, "s[x]");
                    
                }
                ans = strcmp(new, "010");
                ans2 = strcmp(new, "101");
                if(ans == 0 || ans2 == 0)
                {
                    printf("Good\n");
                    return;
                }
            }
        }
       printf("Bad\n");
       


    
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