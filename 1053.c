#include<stdio.h>
int main()
{
    int n, b, i , cnt, sum;
    scanf("%d", &n);

    for (i = 1, b = 1, sum = 1 ,cnt =  0; i <=n+1 ; i++, b++ )
    {
        cnt = n - b;
        if (b  == n)
        {
            break;
        }
        sum *= cnt;
    }
    printf("%d\n", n * sum);
    return 0;
}


