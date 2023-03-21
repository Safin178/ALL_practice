#include<stdio.h>
int main()
{

    int n , i, f=0;
    scanf("%d", &n);

    if(n < 2)
    {
        printf("No");
    }
    else
    {
        for(i = 2 ; i < n ; i++)
    {
      if(n % i == 0 )
        {
            f = 1;
            break;
        }
    }

    if(f == 1)
    {
        printf("No");
    }

    else {printf("Yes");}
    }


    return 0;
}
