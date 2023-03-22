#include<stdio.h>
int main()
{
    /*
    https://atcoder.jp/contests/abc275/tasks/abc275_a
    
    
    */
    
    int n, pos , i;
    scanf("%d", &n);
    int m[n];
    int max = -2;

    for(i = 0; i < n;i++)
    {
        scanf("%d", &m[i]);
        if(max < m[i])
        {
            max = m[i];
            pos = i;
        }
    }
    
    printf("%d", pos +1);
    
    
    
    
    
    
    
    
    return 0;
}