#include<stdio.h>
int main()
{
    /*
    intput :
                3 4
            1 0 0 0
            2 2 0 0
            4 0 5 0
            out : YES
                    3 4
                1 0 0 1
                2 2 0 0
                4 0 5 0
                out : NO
    
    
    */
   //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    
    int n, m, i , j, cnt0= 0, cnt1= 0;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for(i = 0; i  <n ; i++)
    {
        for(j =0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0)
            {
                cnt0++;
            }
            else cnt1++;
        }
    }
    
    if(cnt0 > cnt1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    
    
    
    
    
    
    return 0;
}