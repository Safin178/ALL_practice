#include<stdio.h>

void swap(int *x, int *y)//pass by ref...
{

    int t;
    t = *x;
    *x = *y;
    *y = t;

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

     int a = 5, b = 1575;
     int *p;
     p = &a;
    //  a = 5;
    //  b = 10;
    //  dereferancing oparator *p;
    //  *p likle a ke access korte parbo.

    //  printf("Val : %d\n", a);

    //  printf("Val : %X\n", &b);
    //  printf("%d", sizeof(a)); 

    //pass by value>  just normal swap jeta kaj kore na,

    //pass by referance(mane oi address tai arki)
        scanf("%d%d", p, &b);
        printf("%d - %d\n", a, b);

        //swap(&a, &b);

        printf("%u - %u\n", *(p-1), &b);

    //end





    return 0;
}
