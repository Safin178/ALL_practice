#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d ", &n);
    char s[n];
    scanf("%s", s);
    char q = s[0];
    int i;
    int ans1 = 0, ans2=0;
    for(i = 0; i <n; i++)
    {
        if(s[i] == '<')
        {
            ans1++;
        }
        else
        {
            ans2++;
        }
      
    }
    if(ans1 - ans2==0)
    {
        printf("%d\n", ans1+1);
    }
    else
    {
        printf("%d\n", abs(ans1-ans2)+1);
    }


    
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