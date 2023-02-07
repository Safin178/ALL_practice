#include<stdio.h>
int main()
{
    int a , i , j;

    scanf("%d", &a);//4

    for(i = 1; i <= a; i++)
    {
        for(j = i; j <= a  ;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
