#include<stdio.h>
int main()
{
    int a , b, x=0;
    char s;

    scanf("%d%c%d", &a, &s, &b);

    if(s == '+')
    {
        x = a + b;
    }
     else  if(s == '-')
    {
        x = a - b;
    }
    else if(s == '*')
    {
        x = a * b;
    }
   else if(s == '/')
    {
        x = a / b;
    }
    printf("%d\n", x);
    return 0;
}