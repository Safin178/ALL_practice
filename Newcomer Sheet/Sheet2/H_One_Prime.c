#include<stdio.h>
int main()
{
    int a , i,f;
    scanf("%d", &a);
    for (i = 2, f = 0 ;  i <  a; i++)
    {
        if (a % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}