#include<stdio.h>
int main()
{
    /*
    
    
    */
   long long int n ,i , x;
   int f = 1;
   scanf("%lld", &n);

    x = n % 100;
    for(i = 2 ; i < x;i++ )
   {
     if(x % i == 0)
     {
        f = 0;
        break;
     }
   }
   if(f == 0) 
   {
    for(i = 1 ; i <=n;i++ )
        {
            if(n % i == 0)
            {
                printf("%lld\n", i);
            }
        }
   }
    else 
    {
        printf("1\n%lld\n", n);
    }
    

  
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}