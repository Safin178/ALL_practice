#include <stdio.h>
#include <string.h>
int main()
{
    /*


    */
    char s[100];
    int x, i;
    scanf("%s", s);
    x = strlen(s);
    for(i = 0 ; i < x ; i++)
    {
        printf("%c" , s[i]- 32);
    }

    return 0;
}
