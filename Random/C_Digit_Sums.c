#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000];
    scanf("%s", s);

    int ans = 0,  r = 0, j  =1;
    int x = strlen(s);

    for(int i = 0 ; i <x; i++, j*= 10)
    {

        r += (s[x-i-1] - '0')*j;
        ans += (s[x-i-1] - '0');
    }
    if(r % ans == 0)
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