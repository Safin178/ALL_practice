#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int n, i , j;
    scanf("%d" , &n);
    int ar[n][n];
    for(i= 0 ; i<n ; i++)
    {
        for(j = 0 ; j< n ; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
//input sesh 
    int x =0 , y = 0;
    for(i = 0 , j= n-1; i< n; i++, j--)
    {
        x += ar[i][i];
        y += ar[i][j];
    }
    printf("%d\n", abs((x - y)));







    return 0;
}
