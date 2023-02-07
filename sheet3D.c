
#include<stdio.h>
int main()
{
    /*


    */
    int a, i;
    scanf("%d", &a);
    int m[a];
    for(i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] <= 10)
        {
            printf("A[%d] = %d\n",i, m[i]);
        }

    }












    return 0;
}
