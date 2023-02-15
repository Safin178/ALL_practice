#include<stdio.h>
int main()
{
    int a , i, b,f;
    i = -1;
    b = 1;
// sir theke dekhe korsi
//intialization tik nai , fiusdhfusd
   f =-1;
    while( b <=100)
    {
        scanf("%d", &a);
        if (i < a)
            {
                i = a;
               f = b;

            }
            b++;
    }
    a = i;
    printf ("%d\n",i);
    printf ("%d\n",f);
    return 0;
}


