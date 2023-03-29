#include <stdio.h>
#include <string.h>
int j = 0;
void name()
{
    if (j == 0)
    {
        printf("username: ");
    }
    if (j == 1)
    {
        printf("pwd: ");
    }
    if (j == 2)
    {
        printf("profile: ");
    }
    if (j == 3)
    {
        printf("role: ");
    }
    if (j == 4)
    {
        printf("key: ");
    }
}

int main()
{
    /*

    http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

    */
    char m[200000];
    scanf("%s", m);
    int f = 0, i;
    int x = strlen(m);
    for (i = 0; i < x; i++)
    {
        if (f == 1)
        {
            if (m[i] != '&')
                printf("%c", m[i]);
        }

        if (m[i] == '=')
        {
            name();
            f = 1;
            j++;
        }
        if (m[i] == '&')
        {
            printf("\n");
            f = 0;
        }
    }

    return 0;
}