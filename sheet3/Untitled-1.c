#include<stdio.h>
int main ()
{
   long long int A[100010], i, j, m, k, j1, i1, c = 0, s = 0, p = 0;
   long long int t, n;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        for(i = 1; i <= n; i++)
        {
            scanf("%lld", &A[i]);
        }
        for(i = 1; i <= n; i++)//1 6 3 7 n = 4
        {

            for(j = i; j <= n; j++)
            {
                p = A[j];
                for(k = i; k <= j; k++)
                {
                    if(A[k] > p)
                    {
                        p = A[k];
                    }
                }
                 printf("%lld ", p);
            }
        }
        printf("\n");

    }
    return 0;
}