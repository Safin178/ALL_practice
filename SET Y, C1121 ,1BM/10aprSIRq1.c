#include<stdio.h>
int main()
{
    int n , m, cnt = 0;
    scanf("%d%d", &n, &m);

    int arr[n][m];

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <  m; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] != 0)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);



    return 0;
}
