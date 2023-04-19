#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int x;
    scanf("%d", &x);
    char s[x];
    scanf(" %s ", s);
    int win = 0, i;

    for(i = 0; i< x-1; i+= 2)
    {
        if(s[i] != s[i+1])
        {
            win++;
        }
        else{
            break;
        }
    }
    if(win % 2 == 0)
    {
        printf("Ramos\n");
    }
    else{
        printf("Zlatan\n");
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