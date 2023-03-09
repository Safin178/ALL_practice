#include<stdio.h>
int main()
{
    /*
f is flag

    */
    int x, i, a, b, r, f, x1= 0;
    scanf("%d%d", &a, &b);
    for(i = a; i <= b; i++)
    {
        x = i;
        f = 0;
        while(x > 0)
        {

            r = x % 10;
            if (r != 4 && r != 7)
            {
                f = 1;
                break;
            }
            x /= 10;
        }
        if (f == 0)
        {
            printf("%d ", i);
            x1 = 1971;
        }
    }
 if((f == 1) && (x1 != 1971))
    {
        printf("-1\n");
    }







    return 0;
}
