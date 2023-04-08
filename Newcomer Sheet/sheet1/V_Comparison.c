#include<stdio.h>
int main()
{
    int a,b;
    char s;

    scanf("%d %c %d",&a, &s, &b);

    if (s == 60)//<
    {
        if(a < b)
        {
             printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    if (s == 61)//=
    {
        if(a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
      if (s == 62)//>
    {
        if(a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }

    }

    return 0;
}