#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   int n, i, j;
   scanf("%d", &n);
   char x[n], temp;
   scanf("%s", x);
   
   for(i = 0; i < n ; i++)
   {
     for(j  = i+1; j < n; j++)
     {
        if(x[i] > x[j])
        {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
     }
   }
printf("%s\n", x);
   
   
    
    return 0;
}