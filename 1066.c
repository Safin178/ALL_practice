#include<stdio.h>
int main()
{

    int a, b , c , d , e, x;
    scanf("%d%d%d%d%d", &a, &b , &c , &d , &e);
     x = 0;
    //even
      if(a % 2 == 0)
        {
            x++;
        }
        if(b % 2 == 0)
        {
            x++;
        }
        if(c % 2 == 0)
        {
            x++;
        }
        if(d % 2 == 0)
        {
            x++;
        }
        if(e % 2 == 0)
        {
            x++;
        }
        printf("%d valor(es) par(es)\n", x);

    x = 0;
    //odd
     if(a % 2 != 0)
        {
            x++;
        }
        if(b % 2 != 0)
        {
            x++;
        }
        if(c % 2 != 0)
        {
            x++;
        }
        if(d % 2 != 0)
        {
            x++;
        }
        if(e % 2 != 0)
        {
            x++;
        }
        printf("%d valor(es) impar(es)\n", x);

        x  = 0;
    // positive

        if(a > 0)
        {
            x++;
        }
        if(b > 0)
        {
            x++;
        }
        if(c > 0)
        {
            x++;
        }
        if(d > 0)
        {
            x++;
        }
        if(e > 0)
        {
            x++;
        }
        printf("%d valor(es) positivo(s)\n", x);
    x = 0;
    //negetive
      if(a < 0)
        {
            x++;
        }
        if(b < 0)
        {
            x++;
        }
        if(c < 0)
        {
            x++;
        }
        if(d < 0)
        {
            x++;
        }
        if(e < 0)
        {
            x++;
        }
    printf("%d valor(es) negativo(s)\n", x);
    return 0;
}


