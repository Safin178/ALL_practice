#include<stdio.h>
int main()
{
    /*
    
    
    */
    int t , l, i, x, j;
    scanf("%d", &t);

    for(l = 0 ; l < t; l++)
    
    {
        scanf("%d", &x);
        for(i = 1; i <= x; i++)
        {
            for(j = 1; j<=x ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");

    }
    
    
    
    
    
    
    
    
    
    return 0;
}