#include<stdio.h>
int main()
{
    char c,x;
    scanf("%c", &c);
    if(('a' <= c) && (c <= 'z'))
    {
        printf("%c\n", c - 32);
    }
    if(('A' <= c) && (c <= 'Z'))
    {
        printf("%c\n", c + 32);
    }
    return 0;
}
//hi


