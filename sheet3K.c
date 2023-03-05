#include<stdio.h>
int main()
{
    /*


    */
    int n ,i, sum = 0, x;
    scanf("%d%d", &n, &x);
  
    
    for(i = 0 ; i < n ; i++)
    {
        
        sum += (x % 10);
        x = x / 10;
        

    }
    
    printf("%d", sum);








    return 0;
}
