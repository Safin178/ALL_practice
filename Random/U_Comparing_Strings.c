#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    int i;
    char ar[b], br[a];
    for(i = 0; i < a; i++)
    {
        br[i] = (char)b +'0';

    }
      for(i = 0; i < b; i++)
    {
        ar[i] = (char)a + '0';

    }
    int x = strcmp(ar, br);
    if(x <=0)
    {
        printf("%s", ar);
    }
    else
    {
        printf("%s", br);
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