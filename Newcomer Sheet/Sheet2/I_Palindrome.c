#include<stdio.h>
int main()
{
    /*


    */
        int x, y = 0,r, z;
        scanf("%d", &x);
        z = x;
        while(x > 0)
        {
            r = x % 10;
            y = y * 10 + r;
            x = x / 10;
        }
        if (z == y)
        {
           printf("%d\n",  y);
            printf("YES\n");
        }
        else
        {
            printf("%d\n",  y);
            printf("NO\n");
        }
    return 0;
}