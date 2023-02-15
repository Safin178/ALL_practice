
#include<stdio.h>
int main()
{
    int a , i , x;
    scanf("%d", &a);
    i = 1;
    while( i < 11)
    {
        x = a * i;
        printf("%d x %d = %d\n",i,a,x );
        i++;
    }


    return 0;
}


