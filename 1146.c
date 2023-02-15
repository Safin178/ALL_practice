#include<stdio.h>
int main()
{
    int a , i;
    while(1)
    {
        scanf("%d", &a);
        for( i = 1;i < a; i++)
        {
        printf("%d ", i);
        }
        if(i == a)
        {
            printf("%d\n", i);
        }
        if (a == 0)
        {
            break;
        }

    }


    return 0;
}


