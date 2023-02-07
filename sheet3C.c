
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
        if (m[i] > 0)
        {
            printf("1 ");
        }
        else if(m[i] == 0)
        {
            printf("0 ");
        }
        else
        {
            printf("2 ");
        }
    }












    return 0;
}
