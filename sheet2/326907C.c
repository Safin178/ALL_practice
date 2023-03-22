#include<stdio.h>
int main()
{
    /*
    
    
    */
    int x, n , k, i, j, min ;
    scanf("%d%d", &n, &k);
     
    for(i = 0 ; i <=n;i+= k)
    {
        min = 10e8;
       for(j= 1; ((n-i) != 0); j++)
       {
            scanf("%d", &x);
            if(min > x)
            {
                min = x;
            }

       }
       printf("%d ", min);
    }

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}