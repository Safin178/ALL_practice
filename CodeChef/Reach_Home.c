#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n , a , b; 
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d%d", &a, &b);
        if((a * 5) >= b)
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