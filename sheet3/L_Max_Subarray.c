#include <stdio.h>
int main()
{
  
   
    int t, n, i, j, max, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++)
        { 

            for (j = i; j < n; j++)
            {
                max = a[j];
                for ( x = i; x <= j; x++)
                {
                    if (max <= a[x])
                    {
                        max = a[x];
                    }
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }

    return 0;
}
