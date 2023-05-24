#include<bits/stdc++.h>

using namespace std;

void solve(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i, j, k;
    for(i = 0; i<n; i++)
    {
        arr[i] = n-i;
    }
    int temp;
    int r1 =arr[0];
    int r2 = arr[1];
    for(j = 0; j<n; j++)
    
    {
        for(i =0; i< n; i++)
        {
                if(i % 2 == 0)
            {
                r1 =__gcd(r1,arr[i]);
            }
            else
            {
                r2 = __gcd(r2,arr[i]);
            }
        }
        if(r1 > r2)
        {
            for(k = 0; k<n; k++)
                {
                    printf("%d ", arr[k]);
                }
            printf("\n");
            return;
        }
        else
        {
            temp = arr[n-1];
            arr[n-1] = arr[n-j-1];
            arr[n-j-1]=temp;
        }
       
    }
    printf("-1\n");


    
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