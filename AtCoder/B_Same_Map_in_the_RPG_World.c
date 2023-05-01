#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int h , w;
    scanf("%d %d ", &h, &w);
    char str[h][w];
    int x1=0, x2=0, y1=0, y2=0;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            scanf(" %c ", &str[i][j]);
            
            if(str[i][j] == '#')
            {
                x1++;
            }
            else
            {
                x2++;
            }
            
        }
    }
     for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            scanf(" %c ", &str[i][j]);
            
            if(str[i][j] == '#')
            {
                y1++;
            }
            else
            {
                y2++;
            }
            
        }
    }

    if((x1 == y1)&&(x2 == y2))
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
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