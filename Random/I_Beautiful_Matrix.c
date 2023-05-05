#include<stdio.h>
int main()
{
    /*
    
    
    */
    int a[6][6];
    int i , j, row, col;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    if(row >= 3)
    {
        row = row - 3;
    }
    else if(row < 3)
    {
        row = 3 - row;
    }
    if(col >= 3)
    {
        col = col - 3;
    }
    else if(row < 3)
    {
        col = 3 - col;
    }
    printf("%d", row + col);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}