#include<stdio.h>
int main()
{
    /*


    */
    int x, m, s, h, d;
        x = (9 - 5) * 24 * 60 * 60;

        x = (8 * 60 * 60) + (12 * 60) + 23 + x;

             d = x / (24 * 60 * 60);
            x = x % (24 * 60 * 60);
            h = x / (60 * 60);
            x= x % (60 * 60);
            m = x / (60);
            x = x % 60;
            s = x;
            
        printf("%d %d %d %d ",d,h,m,s );










    return 0;
}
