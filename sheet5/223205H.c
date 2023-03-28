#include<stdio.h>

void time(int x, char c)
{
    int i = 0;
    
    for(i = 0 ; i < x ;i++)
        printf("%c ", c);
    
}

int main()
{
    int n, a;
    char s;
    scanf("%d", &n);
    int j;
    for(j = 0 ; j < n;j++)
    {
        scanf(" %d %c ", &a, &s);
        time(a, s);
        printf("\n");
    }
    return 0;
}