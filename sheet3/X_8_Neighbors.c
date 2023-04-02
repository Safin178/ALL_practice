#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int n , m;
int x , y;
int f = 0;
char str[104][104];

int up(int x, int y)
{
     for(int i = x ; i <= x+1;i++)
    {
        for(int j = y-1; j <= y+1; j++)
        {
            if(i == x && j == y ) continue;

            if(str[i][j] != 'x')
            {
                
                return 1;
            }
        }
    }
    return 0;
}
int down(int x, int y)
{
     for(int i = x-1; i <= x;i++)
    {
        for(int j = y-1; j <= y+1; j++)
        {
            if(i == x && j == y ) continue;

            if(str[i][j] != 'x')
            {
                
                return 1;
            }
        }
    }
    return 0;
}

int left(int x, int y)
{
     for(int i = x-1; i <= x+1;i++)
    {
        for(int j = y; j <= y+1; j++)
        {
            if(i == x && j == y ) continue;

            if(str[i][j] != 'x')
            {
                
                return 1;
            }
        }
    }
    return 0;
}

int right(int x, int y)
{
     for(int i = x-1; i <= x+1;i++)
    {
        for(int j = y-1; j <= y; j++)
        {
            if(i == x && j == y ) continue;

            if(str[i][j] != 'x')
            {
                
                return 1;
            }
        }
    }
    return 0;
}







int fun(int x, int y)
{
    
    for(int i = x-1 ; i <= x+1;i++)
    {
        for(int j = y-1; j <= y+1; j++)
        {
            
            if((x == i) && (y == j )) {continue;}

         else if(str[i][j] != 'x')
            {
                
                 return 1;
            }
        }
    }

    return 0;
}






void solve(void)
{
    
    int i , j;
    scanf("%d%d", &n, &m);
    n = n - 1; 
    m = m - 1;
    
    for(i = 0; i <= n; i++)
    {
        scanf("%s\n", str[i]);
    }
    
    scanf("%d%d", &x, &y);
    x =x - 1;
    y = y - 1;
  
  
    if(x == 0 && y == 0)
    {
        if(str[x][y+1] != 'x') f = 1;
        else if(str[x+1][y] != 'x') f =1;
        else if(str[x+1][y+1] != 'x') f =1;
        
    }
    else if(x == 0 && y == m)
    {
         if(str[x][y-1] != 'x') f = 1;
        else if(str[x+1][y] != 'x') f =1;
        else if(str[x+1][y-1] != 'x') f =1;
        

    }
    else if(x == n && y == 0)
    {
         if(str[x][y+1] != 'x') f = 1;
        else if(str[x-1][y] != 'x') f =1;
        else if(str[x-1][y+1] != 'x') f =1;
    }
    else if(x == n && y == m)
    {
        if(str[x][y-1] != 'x') f = 1;
        else if(str[x-1][y] != 'x') f =1;
        else if(str[x-1][y-1] != 'x') f =1;
    }
    else if (x == 0)
    {
        f = up(x,y);
        printf("%d %d", x, y);
    }
    else if( x == n)
    {
        f = down(x,y);
        

    }
    else if( y == 0)
    {
        f = left(x,y);
    }
    else if (y == m)
    {
       f =  right(x,y);
    }
    else 
    {
        f = fun(x,y);
    }
    
    if (f == 0)
    {
        printf("yes\n");
    }
    else{
        printf("no\n");
    }














    
    
}

int main()
{
    int t = 1;
    //scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}