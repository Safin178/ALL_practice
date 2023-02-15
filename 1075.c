#include<stdio.h>
int main()
{
    int a , i;
    scanf("%d",&a);
    i = 1;
    while (i < 10000)
    {
        if (i % a == 2)
        {
            printf("%d\n", i);
        }
        i++;
        if(i <0)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}


