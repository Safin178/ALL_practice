#include<stdio.h>
int main()
{
    /*


    */

    int n ,m;
    scanf("%d%d", &n, &m);

    int a[n], b[m], sum = 0, i;
    for(i = 0; i < n; i++ )
    {

        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < m; i++)
    {
        scanf("%d", &b[i]);
            sum += a[b[i] - 1];
    }
    printf("%d\n", sum);
    return 0;
}
