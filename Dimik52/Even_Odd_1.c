#include<stdio.h>
int main()
{
    /*
    
    
    */
    long long int x, n;
    scanf("%lld", &n);
    for(int i = 0 ; i< n; i++)
    {
        scanf("%lld", &x);
        if(x % 2 == 0) printf("even\n");
        else printf("odd\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}