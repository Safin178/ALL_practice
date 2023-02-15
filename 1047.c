#include<stdio.h>
int main()
{
    int a , b , c, d, x, y;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    x = (a * 60) + b;
    y = (c * 60) + d;
    if  (x < y )
    {
        x = y - x;
        y = x % 60;// min
        x = x / 60;// hour
    }
    else if ( x >= y )// yesssss done minete e  convert korsi tarpoe 1046 er moto

    {
        x = 1440 - (x - y);
        y = x % 60;// min
        x = x / 60;// hour
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    return 0;
}


