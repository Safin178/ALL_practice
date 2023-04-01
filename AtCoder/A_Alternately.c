#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, f = 0, i;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for(int i = 0; i < n-1; i++)
    {
        if((s[i] == 'M') && (s[i+1] != 'F'))
        {
            f = 1;
            break;
        }
        if((s[i] == 'F') && (s[i+1] != 'M'))
        {
            f = 1; 
            break;
        }
    }
    if(f == 1)
    {
        printf("No\n");
    }
    else{
        printf("Yes\n");
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