#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   int n , l;
   
   scanf("%d", &n);
   for(l = 0 ; l < n ; l++ )
   {
    char str[105];
      scanf(" %s ", str);
          int x = strlen(str);
      if(x <= 10)
      {
        printf("%s\n", str);
      }
      else{
        printf("%c%d%c\n", str[0] , x-2, str[x-1]);
      }
   }

   
    
    return 0;
}