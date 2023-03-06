#include<stdio.h>
int main()
{
    /*


    */
   int n, sum = 0, i;
   scanf("%d", &n);
   char ar[n], x;

  scanf("%s", ar);
    
    for(i = 0 ; i<n ; i++)

    {
        x = ar[i] ;
        
        sum += (x - 48);
    
    }
    
    printf("%d", sum);








    return 0;
}
