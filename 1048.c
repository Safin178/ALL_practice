#include<stdio.h>
int main()
{
    /*


    */
    int z;
    float a, x,y;
    scanf("%f",&a);
    if(a > 2000)//4%
    {
        x = a +(a * 0.04);
        y = x - a ;
        z = 4;
    }
    else if(a > 1200)//7
    {
        x = a + (a * 0.07);
        y = x - a ;
        z = 7;
    }
    else if(a > 800)//10
    {
        x = a + (a * 0.10);
        y = x - a ;
        z = 10;
    }
    else if (a > 400)//12
    {
       x = a + (a * 0.12);
        y = x - a ;
        z = 12;
    }
    else //15
    {
       x = (a + (a * 0.15));
        y = x - a ;
        z = 15;
    }
        printf("Novo salario: %.2f\n",x);
        printf("Reajuste ganho: %.2f\n",y);
        printf("Em percentual: %d %%\n",z);








    return 0;
}
