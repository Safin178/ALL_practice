#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, f= 0;
    scanf("%d", &n);
    int a[10000], b[10000], c[10000];

    for(i = 1; i <=n; i++)
    {
        scanf("%d", &a[i]);
         c[i] = b[i] = a[i];
    }
     f = 0;

    

     

   
    for(i = 1 ; i<=n; i++)
    {
       
        if((a[i] != b[a[i]]) &&(a[i] != c[b[a[i]]]) &&(c[b[a[i]]] != b[a[i]]))
        {
            if(a[c[b[a[1]]]] == a[i]);
            f = 1;
            break;
        }
            
        

      
    }
    if(f == 1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
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