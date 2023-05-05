#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000];
    scanf("%s", s);

    int ans = 0;

    for(int i = 0 ; i <strlen(s); i++)
    {
        if(s[i] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    printf("%d", ans);

    
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