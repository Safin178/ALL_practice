#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[120];
    scanf("%s", s);
    char al[26] = {0};
    int i, cnt = 0 ;

    for(i = 0 ; i < (strlen(s)) ; i++)
    {
        if(al[s[i]-97] == 0)
        {
            al[s[i]- 97] = 1;
            cnt++;
        }
    }
   
    if(cnt % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
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