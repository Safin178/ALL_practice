#include<stdio.h>
int main()
{
     int a,i,x,e,o,n,p;
    scanf("%d", &a);

    for (i = 1,e=0,p=0,o=0,n=0; i <= a;i++)
    {
        scanf("%d", &x);// e , o , p , n
        if (x % 2 == 0)//even
        {
            e++;
        }
         if (x % 2 != 0)//odd
        {
            o++;
        }
         if (x > 0)//pos
        {
            p++;
        }
         if (x < 0)//neg
        {
            n++;
        }
    }
     printf("Even: %d\n", e);
     printf("Odd: %d\n", o);
     printf("Positive: %d\n", p);
     printf("Negative: %d\n", n);
    return 0;
}