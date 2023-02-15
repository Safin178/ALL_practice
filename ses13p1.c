#include<stdio.h>
int main()
{
    char ch , y;
    scanf("%c", &ch);
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        y = ch + 32;
        printf("%c", y);
    }
    if ((ch >= 'a') && (ch <= 'z'))
    {
        y = ch - 32;
        printf("%c", y);
    }
    return 0;
}


