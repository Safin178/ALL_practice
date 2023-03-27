#include <stdio.h>
int main()
{
    /*


    */
    int n, temp;
    scanf("%d", &n);
    int m[(5 * n) + 1];
    int i;
    for (i = 1; i <= 5 * n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (i = 1; i <= 5 * n; i++)
    {

        for (int j = i + 1; j <= 5 * n; j++)
        {
            if (m[i] < m[j])
            {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
    int sum = 0, to = 0;
    for (i = n + 1; i <= ((5 * n) - n); i++)
    {
        sum += m[i];
        to++;
    }

    printf("%.15lf", (double)(sum / (double)to));

    return 0;
}