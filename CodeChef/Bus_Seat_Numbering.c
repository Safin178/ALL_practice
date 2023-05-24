#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int x;
    scanf("%d", &x);
    if( x>=1 && x<=10)
    {
        printf("Lower Double\n");
    }
    else if(x>=11 && x<= 15)
    {
        printf("Lower Single\n");
    }
    else if(x>=16 && x<= 25)
    {
        printf("Upper Double\n");
    }
     else if(x> 25)
    {
        printf("Upper Single\n");
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