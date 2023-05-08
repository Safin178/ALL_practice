#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char p[55];

    scanf(" %s ", p);
    int n= strlen(p);

    if(p[n/2] == p[(n/2)+1] && p[n/2] == p[(n/2)-1] )
    {
        printf("-1\n");
    }
  
    else
    {
        printf("%d\n", n- 1);
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