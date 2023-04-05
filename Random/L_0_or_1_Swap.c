#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i , temp, c = 0, min, cnt= 0, pos, j; 
    scanf("%d", &n);
    int a[n];
    for( i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i< n;i++)
    {
       min = i;
        for(j = i+1;j < n;j++)
        {

            if(a[j] < a[i])
            {
                min = j;
                
            }
        }
          if(min != i){
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
                cnt++;}

    }

  

    
   if(cnt>1)
   {
    printf("NO");
   }
   else{
    printf("YES\n");
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