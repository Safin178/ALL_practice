#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, i, j, k,x , t, l;
    scanf("%d", &t);
    for(l = 0 ; l < t; l++)
    {
    scanf("%d%d", &n, &k);
    int m[n];
    int sum[n];
    x = -10;
    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    for(i = 0 , sum[i] = 0; i <= (n - k); i++)
    {
        for(j = 0 ; j < k; j++)
            {
              sum[i] += m[j];
            }
        if(x < sum[i])
        {
            x = sum[i];
        }

    }
    printf("%d\n", x );
    
    
    }
    
    
    
    
    
    
    
    
    return 0;
}