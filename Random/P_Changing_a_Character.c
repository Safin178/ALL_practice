#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , k ;
    scanf("%d%d", &n, &k);
    k--;
    char s[n];
    scanf(" %s ", s);
    s[k] = s[k]+32;
    printf("%s", s);



    
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