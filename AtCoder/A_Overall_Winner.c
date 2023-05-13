#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n ;
    scanf("%d ", &n);
    char s[n];
    scanf("%s", s);
    int i, a=0,t=0;
    for(i = 0 ; i < n; i++)
    {
        if(s[i] == 'A')
        {
            a++;
            if(a==n/2 && n%2 == 0)
            {
                printf("A\n");
                return;
            }
        }
        else
        {

            t++;
            if(t==n/2 && n%2 == 0)
            {
                printf("T\n");
                return;
            }

        }
    }
    if(a > t)
    {
        printf("A\n");
    }
    else{
        printf("T\n");
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