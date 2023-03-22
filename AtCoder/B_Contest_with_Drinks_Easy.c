#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, sum, i;
    scanf("%d", &n);
    int arr[n+1];

    for(int i = 1; i <= n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m, p, x;
    scanf("%d", &m);
    for(int j = 1 ; j<= m; j++)
    {
        scanf("%d %d", &p , &x);
       for(i = 1 , sum = 0; i <= n; i++)
       {
         
            if(i == p)
                {
                    sum += x;
                    continue;
                }
                sum += arr[i];
       }
        
        printf("%d\n", sum);
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}