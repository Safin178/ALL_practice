#include<stdio.h>
#include<math.h>
int main()
{
    int a,b, f, r,c;
    double x;
    scanf("%d%d", &a, &b);

    x = ((double) a / (double) b);
    f = floor(x);
    r = round(x);
    c = ceil(x);

    printf("floor %d / %d = %d\n", a, b, f);
    printf("ceil %d / %d = %d\n",a, b, c);
    printf("round %d / %d = %d\n", a, b, r);

    return 0;
}


