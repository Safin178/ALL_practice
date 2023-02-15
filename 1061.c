#include<stdio.h>
int main()
{
    /*


    */
    int i,x = 0;

    float a, y = 0;


    for(i = 1;i <= 6;i++)
    {
        scanf("%f",&a);
        if(a > 0)
        {
            x += 1;
            y += a;
        }
    }
    printf("%d valores positivos\n",x);
    printf("%.1f\n", y / x);







    return 0;
}
