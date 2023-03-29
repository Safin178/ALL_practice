#include <stdio.h>
#include <string.h>
int main()
{
    /*


    */
    int cnt = 0, l = 0, r = 0, i, j;
    char str[1005], str2[1000][1000];
    scanf("%s", str);
    int x = strlen(str);

    for (i = 0, j = 0; i < x; i++)
    {
        str2[cnt][j] = str[i];
        j++;
        if (str[i] == 'L')
        {
            l++;
        }
        else
        {
            r++;
        }

        if (l == r)
        {
            j = 0;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (i = 0; i < cnt; i++)
    {
        printf("%s\n", str2[i]);
    }

    return 0;
}