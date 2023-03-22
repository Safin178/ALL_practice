#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n ,i, a, b, c, d; 
    scanf("%d", &n);
    for(int t = 0 ; t < n ; t++)
    {
       
       scanf("%d%d%d%d", &a, &b, &c, &d);
       for(i = 1 ; i; i++)
       {
        if( ((a + i) % b) == ((c + i) % d))
        {
             printf("%d\n", i);
            break;
        }
       }
      
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}