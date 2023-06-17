#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n], i, cnt = 0, max1 = -1, max2=-1;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    
    }
     for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for( i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            cnt++;
           // printf("%d\n", cnt);
        }
        if(max1 < cnt)
        {
            max1 = cnt;
        }
         if(a[i] == 0)
        {
            
            cnt = 0;
        }
    }
    cnt = 0;
    for( i = 0; i < n; i++)
    {
        if(b[i] > 0)
        {
            cnt++;
        }
        if(max2 < cnt)
        {
            max2 = cnt;
        }
         if(b[i] == 0)
        {
           
            cnt = 0;
        }
    }
    //printf("%d %d\n", max1, max2);
    if(max2 < max1)
    {
        printf("Om\n");
    }
    else if(max2>max1)
    {
        printf("Addy\n");
    }
    else{
        printf("Draw\n");
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