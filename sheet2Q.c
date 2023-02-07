#include<stdio.h>
int main()
{
    /*
    t is test case
r = last number
x = x /10 {123 ke 12 kore     }
    */
    int x, r, i, t;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {

        scanf("%d", &x);
        if (x == 0)
        {
            printf("0");
        }
        else{
        while(x > 0)
        {

            r = x % 10;
            printf("%d ", r);
            x = x / 10;

        }
        }
        printf("\n");
    }










    return 0;
}
