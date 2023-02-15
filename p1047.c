#include<stdio.h>
int main()
{
    int a , c , x, b , d , y;
    scanf("%d%d%d%d", &a, &c , &b, &d); // 7 8 7 18
    if ((a >= b) && (c < d) && (b - a > 1))
    {
      x = (24 - a ) + b ;
      y = d - c;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }

     else if ((a >= b) && (c == d)) //2 10 22 50
    {
      x = (24 - a ) + b ;
      y = 0;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
      else if ((a <= b) && (24 >= b) && (c < d))
    {
        x = b - a ;
        y =d - c ;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
    else if ((a < b) && (24 >= b) && (c > d) && (b - a == 1))
    {
        x = 0 ;
        y =(60 - c) + d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
           else if ((a >= b) && (c > d) && (24 >= b))
    {
      x = (24 - a ) + b - 1 ;
      y = (60 - c) + d;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }

      else if ((a < b) && (24 >= b) && (c > d))
    {
        x = b - a ;
        y =(60 - c) + d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
        else if ((a < b) && (24 >= b) && (c == d)) // 7 7 8 7
    {
        x = (b - a)  ;
        y = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
     else if ((a >= b) && (c > d))
    {
      x = (24 - a ) + b - 1 ;
      y = (60 - c) + d;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , x , y);
    }
    return 0;
}

