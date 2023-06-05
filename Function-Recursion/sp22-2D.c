#include<stdio.h>

int multiple(int a, int b)
{ 
    if(b % a == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int x , y;
    scanf("%d %d", &x, &y);

    int l = multiple(x, y);
    printf("%d", l);


    return 0;
}