#include<stdio.h>
int main()
{
    /*
    
    
    */
   int n, x;
   scanf("%d", &n);
   for(int i = 1 ; i <= n ; i++)
   {
        scanf("%d", &x);
        printf("Case %d: 1", i);

        for(int j = 2; j <= x ; j++)
        {
            if(x % j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
   }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}