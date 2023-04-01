#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */

   int sum = 0, len;
   char x[2000001];
   scanf("%s", x);
   len = strlen(x);
   
   for(int i = 0 ; i < len ; i++)
   {
      sum += (x[i]- '0');
   }
    
    
    
    printf("%d", sum);
    
    return 0;
}