#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000000];
    scanf("%[^\n]", s);
    int l = strlen(s);
    int i , f = 0, cnt = 0;
    for( i = 0; i< l; i++)
    {
        if((f == 0) && (s[i] == ' ' || s[i] == '!' || s[i] == '.' || s[i] == ',' || s[i] == '?'))
        {
            cnt++;
            //printf("%c0",s[i] );
            f = 1;
        }
        else if((f == 1) && (s[i] != ' ' && s[i] != '!' && s[i] != '.' && s[i] != ',' && s[i] != '?'))
        {
            f = 0;
        }
    }
    printf("%d\n", cnt);


    
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