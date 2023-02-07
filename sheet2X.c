#include<stdio.h>
#include<math.h>
int main()
{
    /*
    first convert decimal to binary

    */
    int a , y = 0, r,cnt=0, ans = 0, i, t;//bin 1010
        scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        y = 0;cnt = 0; ans = 0;
        scanf("%d", &a);
        while (a > 0)

        {
            r = a % 2;

            if(r != 0)
            {
                y = y * 10 + r;
                ans += (pow(2, cnt));
                cnt++;
            }
            a = a / 2;

        }//bin done without including 0;;

        printf("%d\n" ,ans);







    }





    return 0;
}

