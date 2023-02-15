#include<stdio.h>
int main()
{
    int a , b, x, y ;
    scanf("%d%d", &a, &b);
   x = a / b;
   x = x * b;// overwrite
   y = a - x;
   printf("MOD is %d\n", y);

    return 0;
}


