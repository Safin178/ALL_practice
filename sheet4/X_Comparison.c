#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[10000];
    scanf("%s", s);
    int n = strlen(s);
    int i , j, temp;
    for( i = 1; i < n; i++)
    {
        for( j = 1; j < n; j++)
        {
            if(s[i] < s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
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