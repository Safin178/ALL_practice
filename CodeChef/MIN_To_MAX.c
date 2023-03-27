#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n , x, i; 
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++)
    {
       
        scanf("%d", &x);
        int m[x], mini= 1000, ans =0;
        for(i = 0 ; i < x; i++)
        {
            scanf("%d", &m[i]);
            if(mini > m[i])
            {
                mini = m[i];
            }

        }
        for(i = 0; i < x ;i++)
        {
            if (mini != m[i])
            {
                ans++;
            }
            
        }
        printf("%d\n", ans);
       
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}