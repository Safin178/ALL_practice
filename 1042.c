#include<stdio.h>
int main()
{
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        if(b > c)
        {
            printf ("%d\n%d\n%d\n",c, b, a );
        }
        else if (b < c)
        {
           printf ("%d\n%d\n%d\n", b, c, a );
        }
    }
    else if(b > c)
    {
        if (a > c)
        {
            printf("%d\n%d\n%d\n", c , a ,b);
        }
        else if (a < c)
        {
            printf("%d\n%d\n%d\n", a , c ,b);
        }
    }
          else if(b < c)
    {
        if (a > b)
        {
            printf("%d\n%d\n%d\n", b , a , c);
        }
        else if (a < b)
        {
            printf("%d\n%d\n%d\n", a , b ,c);
        }
    }
    printf(" \n");
    printf("%d\n%d\n%d\n", a , b ,c);

    return 0;
}


