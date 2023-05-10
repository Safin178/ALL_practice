#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[20];
    scanf(" %s ", s);
    
    int ans1 = (s[0] -'0')* 10 + (s[1] - '0');
    int ans2 = (s[3] -'0')* 10 + (s[4] - '0');

    if(ans1 > 12 &&  ans2 <= 12)
    {
        printf("DD/MM/YYYY\n");
    }
    else if(ans1 <= 12 &&  ans2 > 12)
    {
        printf("MM/DD/YYYY\n");
    }
    else
    {
        printf("BOTH\n");
    }


    
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