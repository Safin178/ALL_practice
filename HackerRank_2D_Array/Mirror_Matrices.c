#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n ,m, i, j;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(i = 0; i< n ; i++)
    {
        for(j = 0; j < m ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x , y, l;
    scanf("%d%d", &x, &y);
    int b[x][y];
    for(i = 0; i< x ; i++)
    {
        for(j = 0; j < y ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(n == x && m == y)
    {
    
        for(i = 0; i< x ; i++)
        {
            for(j = 0, l = y-1; j < y ; j++, --l)
            {
                if(a[i][l] != b[i][j])
                {
                    printf("No");
                    return 0;
                }
            }
        }
        printf("Yes\n");
            
    
    
    
    }
    else {printf("No\n");}
    
    
    return 0;
}