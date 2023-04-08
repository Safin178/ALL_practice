#include<stdio.h>
int main()
{
    int a,b,c,f;
    char x,y;

    scanf("%d %c %d %c %d",&a, &x, &b, &y,&c );

    if (x == '+')//+
    {
        f = a + b;
        if(f == c)
        {
             printf("Yes\n");
        }
        else
        {
            printf("%d\n",f);
        }
    }
    if (x == '-')//-
    {
         f = a - b;
        if(f == c)
        {
             printf("Yes\n");
        }
        else
        {
            printf("%d\n",f);
        }
    }
      if (x == '*')//*
    {
        f = a * b;
        if(f == c)
        {
             printf("Yes\n");
        }
        else
        {
            printf("%d\n",f);
        }
    }

    return 0;
}