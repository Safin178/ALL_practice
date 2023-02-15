#include<stdio.h>
int main()
{
    int x, i, n,c,t,r,s;
    char ch;
    double c1 , r1, s1;
    scanf("%d",&x);
    for(i = 1, t = 0,c = 0,r = 0, s = 0; i <= x;i++)
    {
        scanf("%d %c", &n , &ch);
        t += n;
        if (ch == 'C')
        {
            c += n;
        }
           if (ch == 'R')
        {
            r += n;
        }
          if (ch == 'S')
        {
            s += n;
        }
    }

     c1 =  ( (double)c / (double) t)* 100.00  ;
     r1 =   ( (double)r / (double) t)* 100.00  ;
     s1 = ( (double)s / (double) t)* 100.00  ;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", c1);
    printf("Percentual de ratos: %.2lf %%\n", r1);
    printf("Percentual de sapos: %.2lf %%\n", s1);

    return 0;
}


