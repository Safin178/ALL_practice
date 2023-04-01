#include <stdio.h>
int main()
{
    /*


    */
    int a, b, max = -1;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (int i = 1; i <= a; i++)
        {
            if ((a % i == 0) && (b % i == 0))
            {
                if (i > max)
                {
                    max = i;
                }
            }
        }
        printf("%d", max);
    }
    else if (a <= b)
    {
        for (int i = 1; i <= b; i++)
        {
            if ((a % i == 0) && (b % i == 0))
            {
                if (i > max)
                {
                    max = i;
                }
            }
        }
        printf("%d", max);
    }

    return 0;
}