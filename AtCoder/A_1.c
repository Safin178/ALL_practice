#include<stdio.h>
int main()
{
    /*
    https://atcoder.jp/contests/abc277/tasks/abc277_a
    
    */
    int n,k, i;
    scanf("%d%d", &n, &k);

    int m[n+1];

    for(i = 1; i <= n ; i++ )
    {
        scanf("%d", &m[i]);
        if(m[i] == k)
        {
            printf("%d", i);
            break;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}