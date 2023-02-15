#include<stdio.h>
int main()
{
    int x, a, i, f,b;
    scanf("%d", &a);
    for(i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for(x = 2,f = 0; x < b;x++)
        {
            if (b % x == 0 )
            {
                f =1;
            }
        }
        if(f == 0)
        {
            printf("%d eh primo\n", b);
        }
        else if(f == 1)
        {
            printf("%d nao eh primo\n", b);
        }

    }
    return 0;
}


