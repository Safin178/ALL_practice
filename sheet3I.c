#include<stdio.h>
int main()
{
    /*

    smallest pair ,, 1
                     4
                     20 1 9 4
    */
    int t, i, j, n,l, x;
    scanf("%d", &t);

    for(int l = 0; l < t; ++l)
    {
        scanf("%d", &n);
        long long int m[n+1];
        for(i = 1; i <= n; i++)
        {
            scanf("%lld" , &m[i]);
        }
       long long int small = 20000000;
        for(i = 1; i < n; i++)
        {
            for(j =i+1 ; j <= n; j++)
            {
                x = m[i] + m[j] + j - i;
                if(small > x)
                {
                    small = x;
                }
            }
        }

        printf("%lld\n", small);




    }










    return 0;
}
