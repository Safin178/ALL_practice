 #include<stdio.h>
int main()
{
    int a, b, c, i, z;
    a = 0;
    b = 1;
    i =0;
    z=6;
    scanf("%d", &z);
    while (i < (z - 1))
    {
        c = a + b ;
        printf("%d ", a, b, c);
        a = b;
        b = c;
        i++;
    }
        printf("%d\n", a);






    return 0;
}
