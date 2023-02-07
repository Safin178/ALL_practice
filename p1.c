#include<stdio.h>
int main()
{
    /*


    */
    int a, i, f;
    char c;
    scanf("%d", &a);
    for(i = 0; i < a; i++)
    {
        f = 0;
        scanf(" %c",&c);
        if(c == 'c')
        {
           f=1;
        }
        else if(c == 'o')
        {
            f = 1;
        }
         else if(c == 'd')
        {
            f = 1;
        }
         else if(c == 'e')
        {
            f = 1;
        }
         else if(c == 'f')
        {
            f = 1;
        }
         else if(c == 'r')
        {
            f = 1;
        }
         else if(c == 'e')
        {
            f = 1;
        }
         else if(c == 's')
        {
            f = 1;

        }
        if(f == 1)
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
