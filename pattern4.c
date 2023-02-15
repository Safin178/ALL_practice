#include<stdio.h>
int main()
{
    int a, i, j,k;
    scanf("%d", &a);//3
    for(i = 1; i <=a;i++)
    {
      for(j = a - 1 ; j >= i; j--)//potome 2 ta star tarpor ekta
            {
                printf(" ");

            }
        for(k = 1; k <=i;k++)//pattern 3 dek
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



