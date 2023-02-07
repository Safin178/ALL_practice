#include<stdio.h>
int main()
{
    /*


    */
        int n, p, i, x;
        scanf("%d", &n);

        for(p = 1; p <= n ; p++)
        {
            for (i = 2, x = 1971; i < p;i++)
                {
                  if(p == 1)
                  {
                      break;
                  }
                    if((p % i == 0) && (p != 1))
                    {
                        x = 1;
                    }

                }
            if ((x != 1) && (p != 1))
            {
                printf("%d ", p);
            }
        }
//2 3 5 7


    return 0;
}
