#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char arr[10][10];
    int i, j;
    for(i = 0; i < 8 ; i++)
    {
        scanf(" %s ", arr[i]);
    }
    for(i = 0; i < 8; i++)
    {
        for(j = 0 ; j < 8; j++)
        {
            if (arr[i][j] == '*')
            {
                printf("%c%d\n",96+j+1,8-i );
                break;
            }
        }
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