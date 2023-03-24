#include<stdio.h>
int main()
{
    /*
    
    
    */
    int m, n, i, j;
    scanf("%d%d", &m, &n);

    int ar[m][n];

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n; j++)
        {
            scanf("%d", &ar[i][n-1-j]);// n/2 porjonto pore loop calaite partam swap korar jonno ,
        }
    }
      for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}