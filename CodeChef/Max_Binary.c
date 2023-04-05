#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , x, i;
    char s[1000000];
    scanf("%d%d", &n, &x);
    scanf( " %s ", s);
    if(s[0] == '0')
    {
        s[0] = '1';
        printf("%s", s);
        for(i = 0 ; i < x - 1; i++)
        {
            printf("0");
        }
        
    }
    else{
         printf("%s", s);
        for(i = 0 ; i < x; i++)
        {

            printf("0");
        }
    }


    
}

int main()
{
    int t = 1;
    scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
        printf("\n");
        
    }
    return 0;
}