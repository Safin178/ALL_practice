#include<stdio.h>
int main()
{
    int  x,i;
    scanf("%d", &x);

   i = 0;
    while (i < 6 )
    {

        if( x % 2 != 0)
        {
            printf("%d\n", x);
            i++;
            x ++ ;
        }
        else
            {
            x++;
        }
    }

    return 0;
}
