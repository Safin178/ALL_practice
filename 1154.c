#include<stdio.h>
int main()
{
    double x,i, sum;
    i = 0;
    sum = 0;
    while(1)
    {
        scanf("%lf",&x);
        if (x < 0)
        {

            printf("%.2lf\n", sum / i);
            break;

        }
      sum += x;
            i++;
    }
    return 0;
}


