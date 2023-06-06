#include<stdio.h>
int a = 1, b = 2;
int funct2(int a)
{
    return (b + a);

}

int funct1(int a)
{
    b = funct2(a+1)+1;
    return (b);
}
int main()
{
    int c=1, a = 3;
   for(c = 1; c <= 5; ++c)
    {
        b += funct1(c+1) +a;
        printf("%d ", b);
    }
    printf("\nAns = %d", b+a);
    return 0 ;
}
/*
output :
15 43 101 219 457 
Ans = 460
calculation - https://telegra.ph/Aut22-2A-06-06
*/
