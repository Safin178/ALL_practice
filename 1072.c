#include<stdio.h>
int main()
{
    int a, b, i,x,y;
    scanf("%d", &a);
    i = 0;
    x = 0;
    y = 0;
    while(i < a)
    {
        scanf("%d", &b);
        if((10 <= b) && (b <= 20))
        {
            x++;
        }
        else
        {
            y++;
        }
        i++;
    }
    printf("%d in\n", x);
    printf("%d out\n", y);
    return 0;
}


