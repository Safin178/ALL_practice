#include<stdio.h>
int main()
{
    int a, i,j,k,s;
    scanf("%d", &a);

    for(i = 1,s =1; i <= a; i++,s+=2 )
    {
        for(j = a - 1; j >= i;j--)
        {
         printf(" ");
        }
        for(k=1; k <= s;k++)
        {
            printf("*");

        }

        printf("\n");
    }
    return 0;
}


