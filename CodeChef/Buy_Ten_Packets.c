#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

int mini( int k , int l)
{
    if(k > l)
    {
        return l;
    }
    else
    return k;

}

void solve(void)
{
    int x , y, t1, t2, t3;

    scanf("%d%d", &x, &y);
    t1 = (y) + (x * 3);
    t2 = (y*2) + x;
    t3 = x*5;
    
    int ans = mini(t1 , mini(t2, t3));
    printf("%d\n", ans);


    
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