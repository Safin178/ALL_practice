#include<stdio.h>
int main()
{
    int a, i, b,c, x,y;
    scanf("%d", &a);
    for(i = 0; i < a; i++)
    {
        scanf("%d%d", &x, &y);
        for (c = 0, b = 0; c < y; x++ )
        {
            if(x % 2 != 0)
            {
                b += x;
                c++;
            }

        }
        printf("%d\n", b);
    }
    return 0;
}


