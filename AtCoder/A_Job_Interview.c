#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , f = 0, cnt = 0; 
    scanf("%d", &n);
    char str[n];

    for(int i = 0 ; i <n ; i++)
    {
        scanf(" %c ", &str[i]);
        if(str[i] == 'x')
        {
            f = 1;
        }
        else if (str[i] == 'o')
        {
            cnt++;
        }
    }
    if(cnt > 0 && f != 1)
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