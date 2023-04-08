#include<stdio.h>
int main()
{
    int a ,x,y , m, d;
    scanf("%d", &a);//400

    y = a / 365;//1
    printf("%d years\n", y);//1
    x = a % 365;//35

    m = x / 30;//1
    printf("%d months\n", m);//1
    x = x % 30;//5


    printf("%d days\n", x);//5

    return 0;
}
