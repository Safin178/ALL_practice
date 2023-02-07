#include<stdio.h>
int main()
{
    /*


    */
    int t, i ;
    scanf("%d", &t);

    char a, b, c;
    for(i = 0 ; i < t; i++)
    {


        scanf(" %c %c %c",&a, &b, &c);

        if(( a == 'Y' || a == 'y') && ( b == 'E' || b == 'e') && ( c == 'S' || c == 's'))
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
