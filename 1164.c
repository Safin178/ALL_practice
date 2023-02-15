#include<stdio.h>
int main()
{

    int n, i,g,x,c;
    scanf ("%d", &g);
        for (x = 0; x < g ;x++ )
        {
        scanf("%d", &n);
                for (i = 1, c= 0 ; i < n ; i++)
                    {
                        if (n % i == 0)
                            {
                                c += i;
                            }
                    }
        if (c == n)
                {
                    printf("%d eh perfeito\n", n);
                }
        else if (c != n)
                {
                printf("%d nao eh perfeito\n", n);
                }
        }
    return 0;
}


