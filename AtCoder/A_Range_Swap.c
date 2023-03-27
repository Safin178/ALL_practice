#include <stdio.h>
int main()
{
    /*


    */

    int n, p, q, r, s, i, temp, j;
    scanf("%d%d%d%d%d", &n, &p, &q, &r, &s);
    int arr[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = p, j = r; i <= q; i++, j++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}