#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    int b[100000] = {0};

    for(i = 0; i  <n ; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
        if(b[a[i]] > 1)
        {
            printf("ne krasivo\n");
            return;
        }
    }
    printf("prekrasnyy\n");

    
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