#include<stdio.h>
int main()
{
    /*
    
    
    */
    
    long long int i , n;
    
    scanf("%lld", &n);
     for(i = 1 ; i*i <=n;i++ )
        {
            if(n % i == 0)
            {
                printf("%lld\n", n/i);
            }
        }
    
    
    
    
    
    
    
    return 0;
}