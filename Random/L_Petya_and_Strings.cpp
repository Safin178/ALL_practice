#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char a[120], b[120];

    scanf("%s %s", a, b);
    for(int i = 0; i < strlen(a); i++)
    {
        if(b[i]<= 'Z' && b[i]>= 'A')
        {
            b[i] = b[i] + 32;
        }
        if(a[i]<= 'Z' && a[i]>= 'A')
        {
            a[i] = a[i] + 32;
        }
    }
    
    printf("%d\n", strcmp(a, b));

    
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