#include<stdio.h>
int main()
{
    
    int a , b , c, d, x, y,z, s1, s2, z1;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d,&s1, &s2);
    x = ((a * 60) + b) *60 + s1;
    y = ((c * 60) + d) * 60 + s2;
    if  (x < y )
    {
        x = y - x;
        z = x % 3600;//sec
        z1 = z / 60;
        y = z1 % 60;// min
        x = z1 / 60;// hour
    }
    else if ( x >= y )
    {
        x = 1440 - (x - y);
        y = x % 60;// min
        x = x / 60;// hour
    }
    printf("%d HORA(S) E %d MINUTO(S)\n %d" , x , y, z);
    return 0;
}
