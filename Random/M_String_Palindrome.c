#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int a, b;
    a = (n - 1) / 2;
    b = (n+3) / 2;
    int loop = n / 2;

    for(int i = 0; i < loop;i++)
    {
        if(s[a-i-1] != s[n-i-1])
        {
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");


    
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