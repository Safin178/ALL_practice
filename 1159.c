#include<stdio.h>
int main()
{
int x, i, b;
    while(1)
    {
        scanf("%d", &x);
        if(x == 0)
        {
            break;
        }
        else{
        for (i = 1, b = 0;i <= 5;x++)
        {

            if (x % 2 == 0)
                {
                    b += x;
                    i++;
                }

            else if(x % 2 != 0)
                {
                x += 1;
                b += x;
                    i++;
                }
        }
        }
        printf("%d\n", b);
    }
    return 0;
}


