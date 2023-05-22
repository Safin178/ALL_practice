#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    if(n %2== 0 && n%7==0)
    {
        printf("Alice\n");
    }
    else if(n%2!= 0 && n % 9 == 0)
    {
        printf("Bob\n");
    }
    else
    {
        printf("Charlie\n");
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