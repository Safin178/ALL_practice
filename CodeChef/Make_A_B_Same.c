#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n ,i; 
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++)
    {
        int x;
        scanf("%d", &x);
        int a[x], b[x];
        for(i = 0 ; i < x; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0 ; i < x; i++)
        {
            scanf("%d", &b[i]);
        }
        int f = 0;
        for(i = 0 ; i < x; i++)
        {
            if(a[i] != b[i]) 
            {
                if(b[i] != 0)
                {
                    if((a[i-1] == 1) || (a[i+1] == 1))
                    {
                        f = 1;
                        
                    }
                    else f = 0;break;
                }
                else f = 0;break;
            }
            else f = 0;
            
        }
        if(f == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
       
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}