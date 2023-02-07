
#include<stdio.h>
int main()
{
    /*
    s hocce smallest;
        p = smallest er position..
        range er baira

        .

    */
    int a, i, s, p= 0;;
    scanf("%d", &a);
    int m[a];
    for(i = 0, s = 100000000; i < a; i++)
    {
        scanf("%d", &m[i]);
        if(s > m[i])
        {
            s = m[i];
            p = i;
        }

    }
    printf("%d %d\n", s, p + 1);
    return 0;
}

