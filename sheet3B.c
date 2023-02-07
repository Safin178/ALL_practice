#include<stdio.h>
int main()
{
    /*


    */
    int a, x, i, j, f =0, ans;
    scanf("%d", &a);
    int m[a];
    for(i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);
    }
    scanf("%d", &x);
    for(j = 0; j < a; j++)
    {
        if(m[j] == x)
        {
           f = 1;
           ans = j;
           break;//2 er beshi tai
        }

    }
    if(f == 1)
    {
        printf("%d\n", ans);
    }
     else
        {
            printf("-1\n");
        }











    return 0;
}

