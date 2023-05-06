#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[15] = "codeforces";

    char a[15];
    int ans = 0;
    scanf(" %s ", a);
    for(int i = 0; i <11; i++)
    {
        if(a[i] != s[i])
        {
            ans++;
        }

    }
    printf("%d\n", ans);

    
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