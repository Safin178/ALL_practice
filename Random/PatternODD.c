#include<stdio.h>

int main()
{
    /*
    https://telegra.ph/PatternODD-04-12
    
    */
    int n, i, j, k; 
    scanf("%d", &n);//n should be an odd number..

     

     char arr[n+1][n+1];//1 - index 

     int x = (n / 2);
     x++;
     // majkaner X oita print
     

     for(i = 1, k = n; i <= n; i++, k--)
     {
        for(j = 1 ; j <= n ; j++)
        {
            arr[i][j] = '*';// shob gula star
            arr[i][i]= '\\';
            arr[i][k] = '/';
        }
     }
     arr[x][x] = 'x';

     for(i = 1; i <= n; i++)
     {
        for(j = 1; j <= n ; j++)
        {
            
            printf("%c", arr[i][j]);
        }
        printf("\n");
     }
    
    return 0;
}