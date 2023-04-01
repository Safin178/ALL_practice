#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   long long int n ;
   scanf("%lld", &n);
   long long int x = 1, p = 2;
   for(; p <= n;)
   {
        p = p * 2;
        x  = x * 2;
        
   }
   
   if((x-n) == 0)
   printf("1\n");
   else
   printf("%lld\n", (n - x) +1);
   
    
    return 0;
}