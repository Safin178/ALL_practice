#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i , temp, c = 0; 
    scanf("%d", &n);
    int arr[n];
    
    if(n >= 3)
    {
            for(i = 0 ; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < n-1-1; i++)
        {
            if ( c < a[i])
            {
             if((arr[i] > arr[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1]= temp;
            }
             c = arr[i];
            }
            else
            {
                printf("NO\n");
                return;
            }
            
        }
    }
    printf("YES\n");

    
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