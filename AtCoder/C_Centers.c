#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i,j, c;
    scanf("%d", &n);
    int a[n];
    int d[100023]={0};
    for(i = 1 , j= 1; i <= (3*n) ; i++)
    {
        scanf("%d", &c);
        d[c]++;
        if(d[c] == 2)
        {
            a[j] = c;
            j++;
        }
    }
    for(j = 1; j <n; j++)
    {
        printf("%d ", a[j]);
    }
    printf("%d\n", a[n]);
   




    
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