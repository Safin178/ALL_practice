#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n , x; 
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &x);
        if(x % 3 == 0)
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