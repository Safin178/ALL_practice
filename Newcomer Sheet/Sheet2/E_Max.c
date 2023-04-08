#include<stdio.h>
int main()
{
     int a,i, max,b;
    scanf("%d", &a);

    for (i = 1, max=0,b =0; i <= a;i++)
    {
       scanf("%d", &b);
       if(b > max)
       {
           max = b;
       }
    }

    printf("%d\n", max);
    return 0;
}