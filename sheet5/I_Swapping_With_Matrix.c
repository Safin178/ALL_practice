#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#define forl(i , n) for(i = 0 ; i < n ; i++)

 int n, x, y;

int arr[503][503]; 
void swaprow(int x, int y)
{
    int temp, i;
    forl(i,n)
    {
        temp = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp;
    }
    return;
}

void swapcol(int x, int y)
{
    int temp, i;
    forl(i,n)
    {
        temp = arr[x][i];
        arr[x][i] = arr[y][i];
        arr[y][i] = temp;
    }
    return;
}






 
void solve(void)
{

     int i , j;
    scanf("%d%d%d",&n, &x, &y);
    
    x--, y--;
        
    forl(i , n)
    {
        forl(j, n)
        {
            scanf("%d", &arr[i][j]);

        }
    }      
    swapcol( x , y);
    swaprow(x , y);

    forl(i , 4)
    {
        for(j= 0 ;j < 3; j++)
        {
            printf("%d ", arr[][j]);

        }
        printf("%d\n");
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