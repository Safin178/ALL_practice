#include <stdio.h>
int main()
{
    /*
     strlen diye korte partam just try korsi

    */
    char s[105];
    scanf("%s", s);
    int f = 0;

    for (int i = 0; (i != 0 || f == 0); i++)
    {
        if ((s[i] <= 'Z') && (s[i] >= 'A'))
        {
            printf("%d", i + 1);
            break;
        }
        f = 1;
    }

    return 0;
}