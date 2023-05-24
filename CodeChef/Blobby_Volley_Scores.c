#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d ", &n);
    char s[n];
    scanf("%s", s);
    char q= 'A';
    int i, a=0,b=0;
    for(i = 0; i< n; i++)
    {
        if(q == 'A')
        {
            if(q == s[i])
            {
                a++;
            }
            else{
                q = 'B';
            }

        }
        else if(q == 'B')
        {
               if(q == s[i])
            {
                b++;
            }
            else{
                q = 'A';
            }

        }
    }
    printf("%d %d\n", a, b);


    
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