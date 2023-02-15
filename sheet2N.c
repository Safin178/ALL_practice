#include<stdio.h>
int main()
{
    char c, m;
    int a=4, b,i,j;
    scanf("%c", &c);
    if ( c == '+')
    {
        m = '+';
    }
    if ( c == '-')
    {
        m = '-';
    }
    if ( c == '*')
    {
        m = '*';
    }
    if ( c == '/')
    {
        m = '/';
    }
    scanf("%d", &a);
    for (i = 0; i < a ; i++)
    {
        scanf("%d", &b);

        for(j = 0; j < b; j++)
        {
            printf("%c", m);
        }
        printf("\n");
    }




    return 0;
}


