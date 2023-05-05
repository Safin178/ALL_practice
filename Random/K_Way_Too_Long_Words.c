#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000];
    scanf(" %s ", s);
    int n = strlen(s);
    if(n > 10)
    {
        printf("%c", s[0]);
        printf("%d", n - 2);
        printf("%c\n", s[n-1]);
    }
    else
    printf("%s\n", s);


    
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