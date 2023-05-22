#include<stdio.h>

int a = 1, b = 2;

int fun2(int a)
{

    return (b + a);
}

int fun1(int a)
{
    b = fun2(a + 1) + 1;
    return (b);
}

int main ()
{
    int c, a = 3;
    for(c = 1; c <= 5; ++c)
    {
        b += fun1(c + 1) + a;
        printf("%d ", b);

    }
    printf("\nAns = %d", b+a);
    return 0 ;

}
