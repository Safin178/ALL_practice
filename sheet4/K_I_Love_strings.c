#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    int n , i, f = -1;
    int al = strlen(a);
    int bl = strlen(b);
    n = al;
    if(bl < al)
    {
        n = bl;
        f = 0;
    }
    else
    {
        n = al;
        f = 1;
    }
    for(i = 0; i  < n; i++)
    {
        printf("%c%c", a[i], b[i]);
    }
    if(f == 0)
    {
        for(;i <al; i++)
        {
            printf("%c",a[i]);
        }
    }
    else
     {
        for(;i <bl; i++)
        {
            printf("%c",b[i]);
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