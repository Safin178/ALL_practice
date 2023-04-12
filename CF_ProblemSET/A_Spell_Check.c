#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n ; 
    scanf("%d", &n);
    char s[20], temp;

    int i , j;
    scanf(" %s ", s);
    for(i = 0 ; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(s[i] > s[j])
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
        }
    }
    int x = strcmp(s,"Timru");
    if(x == 0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
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