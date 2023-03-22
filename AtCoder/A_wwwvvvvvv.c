#include<stdio.h>
#include<string.h>
int main()
{
    /*
    https://atcoder.jp/contests/abc279/tasks/abc279_a
    
    */
    char m[105];
    int x, ans = 0, i;

    scanf("%s", m);

  
    x = strlen(m);

    for(i = 0; i < x ; i++)
    {
        if(m[i] == 'v')
        {
            ans =ans +1;
        }
        else if(m[i] == 'w')
        {
            ans = ans + 2;
        }
    }
    
    printf("%d", ans);
    
    
    
    
    
    
    
    
    return 0;
}