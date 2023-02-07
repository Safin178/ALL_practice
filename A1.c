#include<stdio.h>
int main()
{
    /*


    */
    int n, a, b, j, k,r;
    scanf("%d", &n);
    for(a=0, k= 0, b= 0, j=2, r = 1; 1;)
    {
        if (r == n)
        {
            break;
        }
         if(k == 3)
        {
            j = 0;
            k = 0;
        }
         for(;j <=2;)
        {
            a += r;
            j++;
            r++;
        }
         for(;j == 3 && k <= 2;)
        {
            b += r;
            k++;
            r++;
        }


    }
    printf("%d %d\n", a, b);









    return 0;
}
