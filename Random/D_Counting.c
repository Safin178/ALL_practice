#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int a , b;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("0\n");
    }
    else{
        printf("%d\n", b - a +1);
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