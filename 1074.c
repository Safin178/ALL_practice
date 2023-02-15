#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d", &a);
    i = 0;
    while (i < a)
    {
        scanf("%d", &b);

        if (b == 0)
        {
            printf("NULL\n");
            i++;
        }
        else if (b % 2 == 0)
        {
            printf("EVEN ");
        }
        else if (b % 2 != 0)
        {
            printf ("ODD ");
        }
        if (b > 0)
        {
            printf("POSITIVE\n");
            i++;
        }
         if (b < 0)
        {
            printf("NEGATIVE\n");
            i++;
        }


    }
    return 0;
}


