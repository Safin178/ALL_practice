#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[10];
    scanf("%s", s);

    char k= s[0];
    s[0] = s[1];
    s[1] =s[2];
    s[2] = k;

    printf("%s", s);





    
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