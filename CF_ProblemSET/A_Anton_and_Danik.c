#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n , d = 0, a = 0; 
    char x;
    scanf("%d ", &n);

    for(int i = 0 ; i  <n ; i++)
    {
        scanf(" %c ", &x);
        if(x == 'D')
        {
            d++;
        }
        else
        {a++;}
    }
    if(a > d)
    {
        printf("Anton\n");
    }
    else if(a < d)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
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