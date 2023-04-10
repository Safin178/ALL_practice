#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char str[50] = "314159265358979323846264338327";

    char s[50];
    scanf("%s", s);
    int i , cnt =0;
    for(i = 0; i  < strlen(s); i++)
    {
        if(str[i] != s[i])
        {
            break;
        }
        cnt++;
    }

    printf("%d\n", cnt);


    
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