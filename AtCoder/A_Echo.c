#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for(int i = 0; i < n; i++)
    {
        printf("%c%c", s[i], s[i]);
    }
    printf("\n");


    
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