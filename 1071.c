#include<stdio.h>
int main()
{
    int  a,b, sum, i;
    scanf("%d%d", &a,&b);
    sum = 0;
   if (a < b)// a , b theke coto hoile , boro hoile nice ase 23 no, line
   {
        i = a +1;
    while (i < b)
    {
        if((i % 2 != 0) || (i % -2 != 0)) // jogfol odd number from a to b
        {
            sum += i;
            i++;
        }
        else
            {
            i++;
        }
    }
   }
    if (a > b)
   {
        i = b+1 ;
    while (i < a)
    {
        if((i % 2 != 0) || (i % -2 != 0))

        {
            sum += i;
            i++;
        }
        else
        {
            i++;
        }
    }
   }
    printf("%d\n", sum);
    return 0;
}


