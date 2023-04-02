#include <stdio.h>
#include<string.h>
int main()
{
    int a, b, i, cnt = 0;
    scanf("%d%d", &a, &b);
    char x[100];

    scanf("%s", x);
    if (x[a] == '-')
    {
        for (i = 0; i < strlen(x); i++)
        {
            if(x[i] == '-') cnt++;
            if (i == a)
            {
                continue;
            }
            if ((x[i] < '0') && (x[i] > '9'))
            {
                printf("No\n");
                return 0;
            }
        }
        if (cnt == 1)
        {
            printf("Yes\n");

        }
        else
        printf("No");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}