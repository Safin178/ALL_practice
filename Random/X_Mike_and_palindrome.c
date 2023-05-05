#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000];
    scanf("%s", s);
    int x = strlen(s);
    int ans = 0;
    for(int i = 0 ;  i< x/2; i++)
    {
        if(s[i] != s[x-1-i])
        {
            ans++;
        }
    }
    if(ans>1)
    {
        printf("NO\n");
    }
    else
    printf("YES");


    
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