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

    int i, temp,j;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i =0; i< n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
  
    int ans = n / 2;
    if(a[ans] >= a[ans-1])
    {
        printf("No\n");
        return;
    }
    else
    {
        printf("Yes\n");
        return;
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