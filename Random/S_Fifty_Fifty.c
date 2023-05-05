#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[5];
    scanf("%s", s);
    int i, f[26] = {0}, a = 0;

    for(i = 0 ; i < 4; i++)
    {
        f[s[i] - 'A']++;
    }
      for(i = 0 ; i < 26; i++)
    {
        if(f[i] == 2)
        {
            a++;
        }
    }
    if(a == 2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    



    
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