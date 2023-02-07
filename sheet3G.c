#include<stdio.h>
int main()
{
    /*

    r == l,//right == left
    */
    int a, i, r, l;
    scanf("%d", &a);
    int m[a];
    for(i = 0, r = 0; i < a; i++)
    {
        scanf("%d", &m[i]);//1234

        r = r * 10 + m[i];//1234
    }
    for(i = a - 1, l = 0; i >= 0; i--)
    {
        l = l * 10 + m[i];//4321
    }
    if(r == l)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }








    return 0;
}

