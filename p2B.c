#include<stdio.h>
int main()
{
    /*


    */
    int t, i, x, y, n, f, j;
    scanf("%d", &t);
    for(i = 1 ; i<= t; i++)
    {


        scanf("%d", &n);
        char m[n];
        x= 0, y = 0, f = 0;
        for(j = 0 ; j < n; j++)
        {
            scanf(" %c", &m[j]);
            if(m[j] == 'L')
            {
                x--;
            }
            else if(m[j] == 'R')
            {
                x++;
            }
            else if(m[j] == 'U')
            {
                y++;
            }
            else if(m[j] == 'D')
            {
                y--;
            }
            if((x == 1) && (y == 1))
            {
                f  = 1;
            }
        }
        if (f == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }










    return 0;
}
