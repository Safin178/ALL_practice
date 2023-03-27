#include<stdio.h>
int main()
{
    /*
    
    
    */
   int n, i, x, y;
   scanf("%d", &n);
   for(i = 0; i < n ; i++)
   {
    scanf("%d%d", &x, &y);
    if(x <= 8)
    {
        if(x * y  <= 500)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    else printf("NO\n");
   }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}