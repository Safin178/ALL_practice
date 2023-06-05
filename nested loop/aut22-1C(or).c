#include<stdio.h>
int main()
{
    int n, i, j, d;
    scanf("%d%d", &n, &d);
    for(i = 0 ; i< n; i++)
    {
        if((i+1) % d == 0)//(i+1) number line
        {
            printf("\n");
            continue;
        }//ei if condition na likle eta ekta normal pattern hoito just
        for(j = (n-i)-1; j> 0; j--)
        {
            printf(" ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
