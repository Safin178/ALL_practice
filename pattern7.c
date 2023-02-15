#include<stdio.h>
int main()
{
    int a, i,j,k,s,x, f;
    scanf("%d", &a);
     for(i = 1,s =1; i < a; i++,s+=2 )
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
    }//allah et A pstrn 5 er gula uopre nice six i <=a diff

    for(x = 1,s   =1; x <a;x++)
    {
        s +=2;
    }
    for(i = 1, f=1; i <= a; i++,s-=2,f++)
    {
         for(j = 1; j < i; j++)
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
