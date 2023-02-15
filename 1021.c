#include <stdio.h>

int main() {

    int x, a, b, c,d,e,f,g, a1,b1,c1,d1,e1,f1;
    scanf("%d", &x);
    a1 = (x % 100);
b1 = (a1 % 50);
c1 = (b1 % 20);
d1 = (c1 % 10);
e1 = (d1 % 5);
f1 = (e1 % 2);

    a = (x / 100);
    b = (a1 / 50);
    c = (b1 / 20);
    d = (c1 / 10);
    e = (d1 / 5);
    f = (e1 / 2);
    g = (f1 /1);

    printf ("%d\n",x);
    printf ("%d nota(s) de R$ 100,00\n", a);
    printf ("%d nota(s) de R$ 50,00\n", b);
    printf ("%d nota(s) de R$ 20,00\n", c);
    printf ("%d nota(s) de R$ 10,00\n", d);
    printf ("%d nota(s) de R$ 5,00\n", e);
    printf ("%d nota(s) de R$ 2,00\n", f);
    printf ("%d nota(s) de R$ 1,00\n", g);


    return 0;
}
