#include<stdio.h>

int main()
{

    int x, i;
    char s[10];
    scanf("%s", s);

   

    for(i = 0 ; i < 10; i++)
    {
        if(s[i] == '0')
        {
            s[i] = '1';
        }
        else if (s[i] == '1')
        {
            s[i] = '0';
        }
    }
    printf("%s", s);

    return 0;
}
