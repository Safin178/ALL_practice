#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
    int n , i, a, b, c, d, e; 
    scanf("%d", &n);
    char s[200];

    for(i = 0 ; i < n ; i++)
    {
        scanf("%s", s);
        a = strcmp(s,"and");
        b = strcmp(s,"not");
        c = strcmp(s,"that");
        d = strcmp(s,"the");
        e = strcmp(s,"you");
    
        if((a == 0) || (b == 0) || (c == 0) || (d == 0) || (e == 0))
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}