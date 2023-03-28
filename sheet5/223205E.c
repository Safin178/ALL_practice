#include<stdio.h>

    int a, b;
void swap(int x, int y)
{
    int t;
    t = a;
    a = b; 
    b = t;
}
int main()
{
    scanf("%d%d", &a, &b);
    swap(a,b);
    printf("%d %d\n", a, b);
    return 0;
}