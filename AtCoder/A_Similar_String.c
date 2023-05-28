#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d ", &n);
    char x[n];
    char y[n];
    int i;
    scanf("%s %s", x, y);
    for(i = 0; i< n; i++)
    {
        if(x[i] != y[i])
        {
            if((x[i] == '0' && y[i] == 'o')||(y[i] == '0' && x[i] == 'o'))
            {
                continue;
            }
            else if(((x[i] == '1' && y[i] == 'l')||(y[i] == '1' && x[i] == 'l')))
            {
                continue;
            }
            else
            {
                printf("No\n");
                return;
            }
        }
    }
    printf("Yes\n");


    
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