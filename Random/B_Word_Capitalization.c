#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[10000];
    scanf("%s", s);

    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    printf("%s\n", s);


    
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