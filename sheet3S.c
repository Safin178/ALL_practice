#include<stdio.h>
int main()
{
    int n, m, i, j, x;
    scanf("%d%d", &n, &m);
    int arr[m][n];
    for(int i = 0 ; i< m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);int f = 0;
     for(int i = 0 ; i< m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            if (x == arr[i][j])
            {
                f =1;
                break;
            }
        }
    } 
    if(f == 1)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }






    return 0;
}
