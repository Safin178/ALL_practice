#include<stdio.h>
int main()
{
    int a, b, i;
    scanf("%d%d", &a,&b);
    i = 1;
    if (a < b)
    {
        i += a;
    while (i < b)
    {
        if ((i % 5 == 2) || (i % 5 == 3))
        {
            printf("%d\n",i);
        }
        i++;
    }
    }
    else if (a > b)
    {
        i += b;
    while (i < a)
    {
        if ((i % 5 == 2) || (i % 5 == 3))
        {
            printf("%d\n",i);
        }
        i++;
    }
    }
    return 0;
}


