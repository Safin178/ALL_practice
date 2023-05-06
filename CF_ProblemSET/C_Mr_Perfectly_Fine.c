#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n ; 
    scanf(" %d ", &n);
    int m, a[n], b[n];
    char s1, s2;
    int i , j, ans, ans2= INT_MAX, lans= INT_MAX, k= 0, l= 0;
    for(i = 0; i <n; i++)
    {
        scanf("%d %c%c ", &m, &s1, &s2);
        if(s1 == '1')
        {
            a[k] = m;
            k++;
        }
        if(s2 == '1')
        {
            b[l] = m;
            l++;
        } 
        
      
    }
    for(i = 0; i < k; i++)
    {
       for(j = 0; j < l;j++)
       {
            ans = a[i]+ b[j];
           if(ans < ans2)
            {
                ans2 = ans;
            }
       }
             if(ans2 <= lans)
            {
                lans = ans2;
            }

    }
    if(lans != 2147483647)
    printf("%d\n", lans);

    else{
        printf("-1\n");
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