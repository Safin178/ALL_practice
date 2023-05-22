#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

int rev(int x)
{
    if(x == 1)
    {
        return 0;
    }
    return 1;
}
void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i , ans = 0;
    for(i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
        ans = rev(a[i]);
        printf("%d ", ans);
    }
    printf("\n");
  
    


    
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