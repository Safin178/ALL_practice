#include<stdio.h>
int main()
{
    /*


    */
    int a , i;
    scanf("%d", &a);
    int m[a];
    for(i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);

    }
    for(i = a - 1; i >= 0; i--)
    {
        printf("%d ", m[i]);
    }










    return 0;
}
