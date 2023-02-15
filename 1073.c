#include<stdio.h>
int main()
{

    int a,x,i ;
    scanf("%d", &a);
    i = 1;
    while (i <= a)
    {
        if(i % 2 == 0)
        {
            x = i * i;
            printf ("%d^2 = %d\n", i, x);
        }
        i++;
    }
    return 0;
}


