#include<stdio.h>
int main()
{
    /*


    */
    int a, i, f = 0, j;
    scanf("%d", &a);
    int m[a];
    for(j = 0; j < a; j++)
    {
        scanf("%d", &m[j]);
    }

    for(i = 0 ; i <  a/2; i++)
    {
        if(m[i] != m[a -i - 1] )
        {
            f = 1;
        }


    }

    if ( f == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }









    return 0;
}

